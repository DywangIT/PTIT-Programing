#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main(){
	ll u0, d, n;
	scanf("%lld %lld %lld", &u0, &d, &n);
	printf("%lld", n * u0 + d * n * (n - 1) / 2);
	return 0;
}
