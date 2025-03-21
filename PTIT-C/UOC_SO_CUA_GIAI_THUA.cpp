#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, p;
		scanf("%d %d", &n, &p);
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			int luu = i;
			while(luu % p == 0){
				++cnt;
				luu /= p;
			}
		}
		printf("%d\n", cnt);
	}
    return 0;
}
