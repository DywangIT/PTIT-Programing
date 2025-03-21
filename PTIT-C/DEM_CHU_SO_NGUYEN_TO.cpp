#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int a[10] = {};
	int cnt = 0;
	long long so_moi = 0;
	while(n > 0){
		int x = n % 10;
		if(x == 2 || x == 3 || x == 5 || x == 7) ++a[x];
		so_moi = so_moi * 10 + x;	
		n /= 10;
	}
	while(so_moi > 0){
		int x = so_moi % 10;
		if((x == 2 || x == 3 || x == 5 || x == 7) && a[x] != 0){
			printf("%d %d\n", x, a[x]);
			a[x] = 0;
		}
		so_moi /= 10;
	}
	return 0;
}
