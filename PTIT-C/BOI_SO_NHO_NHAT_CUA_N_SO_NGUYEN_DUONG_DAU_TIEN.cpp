#include<stdio.h>
#include<math.h>
#include<string.h>

long long BCNN(long long a, long long b){
	long long s = a * b;
	long long phandu;
	while(b != 0){
		phandu = a % b;
		a = b; 
		b = phandu;
	}
	return s / a;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		long long s = 1;
		for(int i = n; i > n / 2; i--) s = BCNN(s, i);
		printf("%lld\n", s);
	}
    return 0;
}
