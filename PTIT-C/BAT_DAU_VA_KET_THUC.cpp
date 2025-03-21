#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int so_cuoi = n % 10;
		while(n >= 10){
			n /= 10;
		}
		if(so_cuoi == n) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
