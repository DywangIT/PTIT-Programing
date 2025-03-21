#include<stdio.h>
#include<math.h>

int main(){
	int n, a[105];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int l = 0, r = n - 1, luu;
	while(l < r){
		luu = a[l];
		a[l] = a[r];
		a[r] = luu;
		++l;
		--r;
	}
	for(int i = 0; i < n; i++) printf("%d ", a[i]);
	return 0;
}
