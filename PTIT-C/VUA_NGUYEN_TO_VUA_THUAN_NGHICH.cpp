#include<stdio.h>
#include<math.h>

int nguyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int thuan_nghich(int n){
	int so_moi = 0;
	int luu = n;
	while(n > 0){
		so_moi = so_moi * 10 + n % 10;
		n /= 10;
	}
	if(so_moi == luu) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(nguyento(i)){
				if(thuan_nghich(i)){
					printf("%d ", i);
					++cnt;
				}
			}
			if(cnt == 10){
				printf("\n");
				cnt = 0;
			} 
		}
		printf("\n");
	}
	return 0;
}
