#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int nt(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i = 5; i <= sqrt(n); i+= 6){
		if(n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		if(nt(n) == 0) printf("0 ");
		else{
			int check = 1;
			int a;
			for(int i = 10; i <= 1000000; i*=10){
				if(n / i == 0){
					a = i;
					break;
				}
			}
			for(int i = 10; i < a; i*=10){
				int x = (n % i) * (a / i) + n / i;
				if(nt(x) == 0){
					check = 0;
					break;
				}
			}
			if(check) printf("1 ");
			else printf("0 ");
		}
	}
	return 0;
}
