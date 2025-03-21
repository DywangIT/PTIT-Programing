#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int s = 0;
	int so_tach_ra;
	while(n != 0){
		so_tach_ra = n % 10;
		s += so_tach_ra;
		n /= 10;
	}
	printf("%d", s);
	return 0;
}
