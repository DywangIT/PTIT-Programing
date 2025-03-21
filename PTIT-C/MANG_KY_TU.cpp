#include<stdio.h>
#include<math.h>
#include<string.h>

long long small_number(long long n){
	long long so_moi_nguoc = 0, so_moi = 0;
	while(n > 0){
		long long x = n % 10;
		if(x == 6) x = 5;
		so_moi_nguoc = so_moi_nguoc * 10 + x;
		n /= 10;
	}
	while(so_moi_nguoc > 0){
		so_moi = so_moi * 10 + so_moi_nguoc % 10;
		so_moi_nguoc /= 10;
	}
	return so_moi;
}

long long big_number(long long n){
	long long so_moi_nguoc = 0, so_moi = 0;
	while(n > 0){
		long long x = n % 10;
		if(x == 5) x = 6;
		so_moi_nguoc = so_moi_nguoc * 10 + x;
		n /= 10;
	}
	while(so_moi_nguoc > 0){
		so_moi = so_moi * 10 + so_moi_nguoc % 10;
		so_moi_nguoc /= 10;
	}
	return so_moi;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b; 
		scanf("%lld %lld", &a, &b);
		printf("%d %d", small_number(a) + small_number(b), big_number(a) + big_number(b));
	}
    return 0;
}
