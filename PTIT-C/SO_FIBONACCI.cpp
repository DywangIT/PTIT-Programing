#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long a[100];
		a[0] = 1; a[1] = 1;
		for(int i = 2; i < n; i++) a[i] = a[i - 1] + a[i - 2];
		printf("%lld\n", a[n - 1]);
	}
	return 0;
}
