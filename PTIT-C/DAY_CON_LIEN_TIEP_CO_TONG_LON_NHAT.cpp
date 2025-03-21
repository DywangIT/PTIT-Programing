#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n, a[100005];
		scanf("%lld", &n);
		for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
		long long max = a[0], s = 0;
		for(int i = 0; i < n; i++){
			s += a[i];
			if(s > max) max = s;
			if(s < 0) s = 0;
		}
		printf("%lld\n", max);
	}
    return 0;
}
