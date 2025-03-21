#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long l, r;
		scanf("%lld %lld", &l, &r);
		long long cnt = 0;
		for(int i = sqrt(l); i <= sqrt(r); i++){
			if(i * i > l && i * i < r){
				int check = 1;
				if(i < 2) check = 0;
				for(int j = 2; j <= sqrt(i); j++){
					if(i % j == 0){
						check = 0;
						break;
					}
				}	
				if(check == 1) ++cnt;
			}
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
