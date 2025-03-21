#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int tich = 1, so_tach_ra;
	while(n != 0){
		so_tach_ra = n % 10;
		tich *= so_tach_ra;
		n /= 10;
	}
	printf("%d", tich);
	return 0;
}
