#include<stdio.h>
#include<math.h>

int so_hoan_hao(int n){
	int s = 0;
	for(int i = 1; i <= n / 2; i++){
		if(n % i == 0) s += i;
	}
	if(s == n) return 1;
	return 0;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int luu;
	if(a > b){
		luu = a;
		a = b; 
		b = luu;
	}
	for(int i = a; i <= b; i++){
		if(so_hoan_hao(i)) printf("%d ", i);
	}
	return 0;
}
