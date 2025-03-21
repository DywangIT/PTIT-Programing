#include<stdio.h>
#include<math.h>

int giai_thua(int n){
	int gt = 1;
	for(int i = 1; i <= n; i++) gt *= i;
	return gt;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int luu = a;
		a = b;
		b = luu;
	}
	for(int i = a; i <= b; i++){
		int s = 0, luu = i;
		while(luu > 0){
			s += giai_thua(luu % 10);
			luu /= 10;
		}
		if(i == s) printf("%d ", i);
	}
	return 0;
}
