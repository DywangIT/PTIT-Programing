#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long so_moi = 0;
		long long cnt = 1;
		int check = 1;
		while(n > 0){
			long long so_tach_ra = n % 10;
			if(so_tach_ra == 0) so_tach_ra = 0;
			else if(so_tach_ra == 1) so_tach_ra = 1;
			else if(so_tach_ra == 8) so_tach_ra = 0;
			else if(so_tach_ra == 9) so_tach_ra = 0;
			else{
				check = 0;
				break;
			}
			so_moi = so_tach_ra * cnt + so_moi;
			cnt *= 10;
			n /= 10;
		}
		if(check == 0 || so_moi == 0) printf("INVALID");
		else printf("%lld", so_moi);
		printf("\n");
	}
	return 0;
}
