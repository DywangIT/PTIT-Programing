#include<stdio.h>
#include<math.h>

int giai_thua(int n){
	int gt;
	for(gt = 1; n > 1; n--) gt *= n;
	return gt;
}

int so_hang(int n, int k){
	return giai_thua(n) / (giai_thua(k) * giai_thua(n - k));
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++) printf("%d ", so_hang(i,j));
		printf("\n");
	}
	return 0;
}
