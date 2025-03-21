#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int n){
	int so_moi = 0, luu = n;
	while(n > 0){
		if(n % 10 == 9) return 0;
		so_moi = so_moi * 10 + n % 10;
		n /= 10;
	}
	if(so_moi != luu) return 0;
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int cnt = 0;
	for(int i = 2; i < n; i++){
		if(check(i)){
			printf("%d ", i);
			++cnt;
		}
	}
	printf("\n%d", cnt);
    return 0;
}
