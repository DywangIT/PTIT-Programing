#include <stdio.h>
#include <math.h>

int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), cmp);
		int min = 1e9;
		int cnt = 0;
		for(int i = 0; i < n - 1; i++){
			if(a[i + 1] - a[i] < min) min = a[i + 1] - a[i];
		}
		for(int i = 0; i < n - 1; i++){
			if(a[i + 1] - a[i] == min) ++cnt;
		}
		printf("%d %d\n", min, cnt);
	}
	return 0;
}
