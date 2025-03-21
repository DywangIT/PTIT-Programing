#include<stdio.h>
#include<math.h>

//int so_thuan_nghich(int n){
//	int s = 0, luu = n;
//	while(n > 0){
//		s = s * 10 + n % 10;
//		n /= 10;
//	}
//	if(s == luu) return 1;
//	return 0;
//}

int check(long long n){
	int s = 0, so_moi = 0, luu = n;
	while(n > 0){
		s += n % 10;
		so_moi = so_moi * 10 + n % 10;
		if((n % 10) % 2 == 0) return 0;
		n /= 10;
	}
	if(s % 2 == 0) return 0;
	if(so_moi != luu) return 0;
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
