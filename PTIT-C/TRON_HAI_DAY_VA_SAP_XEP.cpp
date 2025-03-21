#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	int cnt = 1;
	while(t--){
		int n; scanf("%d", &n);
		int a[n + 5], b[n + 5];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		for(int i = 0; i < n; i++) scanf("%d", &b[i]);
		for(int i = 1; i < n; i++){
			for(int j = 0; j < n - 1; j++){
				if(a[j] > a[j + 1]){
					int luu = a[j];
					a[j] = a[j + 1];
					a[j + 1] = luu;
				}
			}
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < n - 1; j++){
				if(b[j] < b[j + 1]){
					int luu = b[j];
					b[j] = b[j + 1];
					b[j + 1] = luu;
				}
			}
		}
		printf("Test %d:\n", cnt);
		for(int i = 0; i < n; i++){
			printf("%d %d ", a[i], b[i]);
		}
		++cnt;
		printf("\n");
	}
    return 0;
}
