#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int cmp1(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return (*x - *y);
}

int cmp2(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *y - *x;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int m, n;
		char c;
		scanf("%d %d %c", &m, &n, &c);
		int a[m + n];
		for(int i = 0; i < m + n; i++) scanf("%d", &a[i]);
		if(c == 'F') for(int i = 0; i < m + n; i++) printf("%d ", a[i]);
		else if(c == 'A'){
			for(int i = m; i < m + n; i++) printf("%d ", a[i]);
			for(int i = 0; i < m; i++) printf("%d ", a[i]);
		}
		else{
			if(c == 'T') qsort(a, m + n, sizeof(int), cmp1);
			else qsort(a, m + n, sizeof(int), cmp2);
			for(int i = 0; i < m + n; i++) printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
