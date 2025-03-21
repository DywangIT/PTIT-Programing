#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int check = 1;
		long long so_so_sanh = 10;
		long long so_tach_ra;
		while(n > 0){
			so_tach_ra = n % 10;
			if(so_tach_ra > so_so_sanh){
				check = 0;
				break;
			}
			so_so_sanh = so_tach_ra;
			n /= 10;
		}
		if(check == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
