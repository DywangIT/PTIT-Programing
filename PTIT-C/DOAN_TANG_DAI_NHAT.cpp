#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	int test = 1;
	while(t--){
		int n, a[105];
		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		int longest = -1e9;
		int cnt = 1;
		for(int i = 1; i < n; i++){
			if(a[i] > a[i - 1]){
				++ cnt;
				if(cnt > longest) longest = cnt;
			} 
			else cnt = 1;
		}
		int b[105] = {0}, cnt1 = 1;
		for(int i = 1; i < n; i++){
			if(a[i] > a[i - 1]){
				++ cnt1;
			}
			else cnt1 = 1;
			if(cnt1 == longest){
				++b[i - longest + 1];
				cnt1 = 1;
			}
		}
		printf("Test %d:\n%d\n", test, longest);
		for(int i = 0; i < n; i++){
			if(b[i] != 0){
				for(int j = i; j < i + longest; j++) printf("%d ", a[j]);
				printf("\n");
			}
		}
		++test;
	}
    return 0;
}
