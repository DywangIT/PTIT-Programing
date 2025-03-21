#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		int m, n, a[210], b[105], index;
		scanf("%d %d", &m, &n);
		scanf("%d", &index);
		for(int i = 0; i < m; i++) scanf("%d", &a[i]);
		for(int i = 0; i < n; i++) scanf("%d", &b[i]);
		for(int i = m + n; i >= index + n; i--){
			a[i] = a[i - n];
		}
		for(int i = index; i <= index + n - 1; i++) a[i] = b[i - index];
		printf("Test %d:\n", cnt);
		for(int i = 0; i < m + n; i++) printf("%d ", a[i]);
		printf("\n");
		++cnt;
		}
	return 0;
}
