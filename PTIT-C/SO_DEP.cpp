#include<stdio.h>
#include<math.h>

int so_thuan_nghich(long long n){
	int luu = n, s = 0;
	while(n > 0){
		s = s * 10 + n % 10;
		n /= 10;
	}
	if(luu == s) return 1;
	return 0;
}

int check(long long n){
	long long so_dau, so_cuoi, luu = n;
	int cnt = 0;
	so_cuoi = n % 10;
	while(n >= 10){
		++cnt;
		n /= 10;
	}
	so_dau = n; 
	long long x = n;
	for(int i = 1; i <= cnt; i++){
		x = x * 10;
	}
	if(so_thuan_nghich((luu - x - so_cuoi) / 10) == 0) return 0;
	if(so_dau * 2 != so_cuoi && so_cuoi * 2 != so_dau) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
