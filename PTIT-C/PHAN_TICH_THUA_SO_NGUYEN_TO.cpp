#include<stdio.h>
#include<math.h>


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d = ", n);
		for(int i = 2; i <= n; i++){
			int luu = 0, cnt = 0;
			while(n % i == 0){
				luu = i;
				++cnt;
				n /= i;
			}
			if(luu != 0){
				printf("%d^%d", luu, cnt);
				if(n != 1) printf(" * ");
			}
		}
		printf("\n");
	}
	return 0;
}
// 60 = 2^2 * 3^1 * 5^1
