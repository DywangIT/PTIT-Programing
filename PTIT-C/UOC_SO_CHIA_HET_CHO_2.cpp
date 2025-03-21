#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		// Thuat toan tim so uoc chia het cho hai
		int cnt1 = 0;
		while(n % 2 == 0){
			++cnt1;
			n /= 2;
		}
		int cnt2 = 1;
		if(n == 1) cnt2 = 1;
		else{
			for(int i = 1; i <= n / 2; i++){
				if(n % i == 0) ++cnt2;
			}
		}
		
		printf("%d\n", cnt1 * cnt2);
	}
	return 0;
}
