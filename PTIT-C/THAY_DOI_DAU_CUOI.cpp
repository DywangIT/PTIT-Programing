#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int so_cuoi, so_dau;
	so_cuoi = n % 10;
	int cnt = 0;
	int m = n, sodep = 1;
	while(n > 10){
		++cnt;
		n /= 10;
	}
	so_dau = n;
	for(int i = 1; i <= cnt; i++){
		sodep *= 10;
	}
	printf("%d", so_cuoi * sodep + m % sodep - so_cuoi + so_dau);
	return 0;
}
