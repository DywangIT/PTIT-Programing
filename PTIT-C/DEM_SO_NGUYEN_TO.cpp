#include<stdio.h>
#include<math.h>

int ng_to(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int check(int n){
	while(n > 0){
		if(ng_to(n % 10) == 0) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for(int i = a; i<= b; i++){
			if(check(i)){
				if(ng_to(i)) ++cnt;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
