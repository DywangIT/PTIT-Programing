#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	int bo_test = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		printf("Test %d: ", bo_test);
		for(int i = 2; i <= n; i++){
			int cnt = 0;
			int luu = 0;
			while(n % i == 0){
				++cnt;
				n /= i;
				luu = i;
			}
			if(luu != 0) printf("%d(%d) ", luu, cnt);
		}
		printf("\n");
		++bo_test;
	}
	return 0;
}
//Test 1: 2(2) 3(1) 5(1)
