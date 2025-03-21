#include<stdio.h>
#include<math.h>

int main(){
	int n, cnt = 0, max = 0;
	scanf("%d", &n);
	int a[n + 5], b[100000] = {};
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		++b[a[i]];
		if(a[i] > max) max = a[i];
	}
	for(int i = 0; i <= max; i++){
		if(b[i] > 1){
			++cnt;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0; i < n; i++){
		if(b[a[i]] > 1){
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	}
	return 0;
}
