#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int sochan = 0, sole = 0;
		while(n > 0){
			long long so_tach_ra = n % 10;
			if(so_tach_ra % 2 == 0) ++sochan;
			else ++sole;
			n /= 10;
		}
		if(sochan > sole) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
