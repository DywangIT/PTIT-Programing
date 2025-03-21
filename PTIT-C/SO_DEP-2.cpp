#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int n){
	int so_moi = 0, s = 0, luu = n;
	while(n > 0){
		so_moi = so_moi * 10 + n % 10;
		s += n % 10;
		n /= 10;
	}
	if(so_moi == luu && s % 10 == 0) return 1;
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int cnt = 1;
		while(n > 0){
			cnt *= 10;
			--n;
		}
		int so_dep = 0;
		int start = cnt / 10, end = cnt - 1;
		for(int i = start; i <= end; i++){
			if(check(i)) ++so_dep;
		}
		printf("%d\n", so_dep);
	}
    return 0;
}
