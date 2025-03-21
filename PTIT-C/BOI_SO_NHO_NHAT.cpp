#include <stdio.h>
#include <string.h>
#include <math.h>

long long bcnn(long long a, long long b){
	long long s = a * b;
	while(b != 0){
		int phan_du = a % b;
		a = b;
		b = phan_du;
	}
	return s / a;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int m, n;
		scanf("%d %d", &m, &n);
		if(m < n){
			int luu = m;
			m = n; n = luu;
		}
		long long s = 1;
		for(int i = n; i <= m; i++){
			s = bcnn(s, i);
		}
		printf("%lld\n", s);
	}
	return 0;
}
