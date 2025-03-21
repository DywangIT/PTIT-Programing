#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	long long a, b;
	while(scanf("%lld", &a) != -1){
		scanf("%lld", &b);
		if(a > b){
			long long tmp = a;
			a = b; 
			b = tmp;
		}
		long long x = b - a;
		long long y = sqrt(x);
		if(y * y == x) printf("%lld", 2 * y - 1);
		else if(x <= y * y + y) printf("%lld", 2 * y);
		else printf("%lld", 2 * y + 1);
		printf("\n");
	}
	return 0;
}
