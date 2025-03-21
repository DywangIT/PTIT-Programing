#include<stdio.h>
#include<math.h>

int tong_chu_so(int n){
	int s = 0;
	while(n > 0){
		s += n % 10;
		n /= 10;
	}
	return s;
}

int tong_thua_so_nt(int n){
	int s = 0;
	for(int i = 2; i <= n; i++){
		while(n % i == 0){
			s += tong_chu_so(i);
			n /= i;
		}
	}
	return s;
}

int main(){
	int n;
	scanf("%d", &n);
	if(tong_chu_so(n) == tong_thua_so_nt(n)) printf("YES");
	else printf("NO");
	return 0;
}
