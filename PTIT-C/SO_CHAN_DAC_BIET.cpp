#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int check = 1;
		while(n > 0){
			long long so_tach_ra = n % 10;
			if(so_tach_ra % 2 != 0){
				check = 0;
				break;
			}
			n /= 10;
		}
		if(check == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
