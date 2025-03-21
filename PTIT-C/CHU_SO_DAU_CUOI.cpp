#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int so_cuoi = n % 10;
	while(n >= 10){
		n /= 10;
	}
	printf("%d %d", n, so_cuoi);
	return 0;
}
