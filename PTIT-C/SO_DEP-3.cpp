#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int n){
	int so_moi = 0, s = 0, luu = n, ok = 0;
	while(n > 0){
		so_moi = so_moi * 10 + n % 10;
		s += n % 10;
		if(n % 10 == 6) ok = 1;
		n /= 10;
	}
	if(so_moi == luu && s % 10 == 8 && ok == 1) return 1;
	return 0;
}

int main(){
	int m, n; 
	scanf("%d %d", &m, &n);
	int a = m < n ? m : n;
	int b = m > n ? m : n;
	int cnt = 0;
	for(int i = a; i <= b; i++){
		if(check(i)) printf("%d ", i);
	}
    return 0;
}
