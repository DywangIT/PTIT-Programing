#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int check = 1;
		double a, b, x, y, m, n;
		scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &x, &y, &m, &n);
		if((a == x && a == m) || (b == y && b == n) || (a == x && b == y) || (a == m && b == n) || (x == m && y == n)){
			printf("INVALID");
			check = 0;
		}
		else if(a != x && a != m && b != y && b != n && x != m && y != n){
			if((a - x) / (b - y) == (a - m) / (b - n)){
				printf("INVALID");
				check = 0;
			}
		}
		if(check){
			double canh1 = sqrt((a - x) * (a - x) + (b - y) * (b - y));
			double canh2 = sqrt((a - m) * (a - m) + (b - n) * (b - n));
			double canh3 = sqrt((m - x) * (m - x) + (n - y) * (n - y));
			double S = sqrt((canh1 + canh2 + canh3) * (canh1 + canh2 - canh3) * (canh1 - canh2 + canh3) * (canh2 + canh3 - canh1));
			printf("%.2lf", S / 4);
		}
		printf("\n");
	}
	return 0;
}
