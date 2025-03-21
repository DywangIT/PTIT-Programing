#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int a[10] = {};
	long long so_moi = 0;
	while(n > 0){
		long long x = n % 10;
		if(x == 2 || x == 3 || x == 5 || x == 7) ++a[x];
		so_moi = so_moi * 10 + n % 10;
		n /= 10;
	}
	while(so_moi > 0){
		long long x = so_moi % 10;
		if((x == 2 || x == 3 || x == 5 || x == 7) && a[x] != 0){
			printf("%d %d\n", x, a[x]);
			a[x] = 0;
		}
		so_moi /= 10;
	}
    return 0;
}
