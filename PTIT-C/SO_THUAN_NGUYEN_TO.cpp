#include <stdio.h>
#include <string.h>
#include <math.h>

int nguyento(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i = 5; i * i <= n; i+= 6){
		if(n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int check(int n){
	if(nguyento(n) == 0) return 0;
	int s = 0;
	while(n > 0){
		s += n % 10;
		if(nguyento(n % 10) == 0) return 0;
		n /= 10;
	}
	if(nguyento(s) == 0) return 0;
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int l, r;
		scanf("%d %d", &l, &r);
		int cnt = 0;
		for(int i = l; i <= r; i++){
			if(check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
