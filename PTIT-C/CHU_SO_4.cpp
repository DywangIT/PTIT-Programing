#include<stdio.h>
#include<math.h>

int so_thuan_nghich(int n){
	int luu = n, s = 0;
	while(n > 0){
		s = s * 10 + n % 10;
		n /= 10;
	}
	if(luu == s) return 1;
	return 0;
}

int check(int n){
	int s;
	while(n > 0){
		int x = n % 10;
		if(x == 4) return 0;
		s += n % 10;
		n /= 10;
	}
	if(s % 10 != 0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int start, end = 1, cnt = 0;
		while(n > 0){
			++cnt;
			n /= 10;
		}
		for(int i = 1; i <= cnt; i++) end *= 10;
		start = end / 10;
		end -= 1;
		for(int i = start; i <= end; i++){
			if(so_thuan_nghich(i)){
				if(check(i)) printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}
