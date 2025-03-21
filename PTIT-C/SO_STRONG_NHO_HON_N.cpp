#include<stdio.h>
#include<math.h>

int giai_thua(int n){
	int gt = 1;
	for(int i = 1; i <= n; i++) gt *= i;
	return gt;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		int s = 0, luu = i;
		while(luu > 0){
			s += giai_thua(luu % 10);
			luu /= 10;
		}
		if(i == s) printf("%d ", i);
	}
	return 0;
}
