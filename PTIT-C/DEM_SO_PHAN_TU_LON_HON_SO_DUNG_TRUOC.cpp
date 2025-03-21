#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		long long a[55];
		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
		int cnt = 0, max = a[0];
		for(int i = 1; i < n; i++){
			if(a[i] >= max){
				++cnt;
				max = a[i];
			}
		}
		printf("%d\n", cnt + 1);
	}
	return 0;
}
