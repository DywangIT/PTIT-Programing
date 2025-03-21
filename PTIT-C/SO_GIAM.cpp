#include<stdio.h>
#include<math.h>

int check(int n){
	if(n < 10) return 1;
	while(n > 10){
		int so_tach_ra = n % 10;
		if(so_tach_ra >= (n / 10) % 10) return 0;
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
		for(int i = a; i <= b; i++){
			if(check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
