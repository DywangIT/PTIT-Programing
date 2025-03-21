#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int so_tach_ra;
		int s = 0;
		while(n != 0){
			so_tach_ra = n % 10;
			s += so_tach_ra;
			n /= 10;
		}
		printf("%d\n", s);
	}
	return 0;
}
