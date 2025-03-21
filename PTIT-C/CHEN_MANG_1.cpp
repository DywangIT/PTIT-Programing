#include<stdio.h>
#include<math.h>

int main(){
	int m, n, a[210], b[105], index;
	scanf("%d %d", &m, &n);
	for(int i = 0; i < m; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++) scanf("%d", &b[i]);
	scanf("%d", &index);
	for(int i = m + n; i >= index + n; i--){
		a[i] = a[i - n];
	}
	for(int i = index; i <= index + n - 1; i++) a[i] = b[i - index];
	for(int i = 0; i < m + n; i++) printf("%d ", a[i]);
	return 0;
}
