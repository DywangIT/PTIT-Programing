#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int p = 1, luu = 1;
		for(int i = 2; i <= n; i++){
			while(n % i == 0){
				if(i != luu){
					p *= i;
					luu = i;
				}
				n /= i;
			}
		}
		printf("%d\n", p);
	}
    return 0;
}
