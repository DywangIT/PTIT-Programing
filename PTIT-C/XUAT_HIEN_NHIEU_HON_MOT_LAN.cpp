#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int b[100000] = {}, max = -1e9;
	for(int i = 0; i < n; i++){
		++b[a[i]];
		if(a[i] > max) max = a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(b[a[i]] >= 2){
			printf("%d ", a[i]);
			b[a[i]] = 0;
			++cnt;
		}
	}
	if(cnt == 0) printf("0");
	return 0;
}
