#include<stdio.h>
#include<math.h>

int giai_thua(int n){
	int gt = 1;
	for(int i = 1; i <= n; i++) gt *= i;
	return gt;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int x = 1;
	for(int i = 1; i <= k; i++) x *= 2;
	if(giai_thua(n) % x == 0) printf("YES");
	else printf("NO");
	return 0;
}
