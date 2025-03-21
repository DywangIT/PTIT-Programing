#include<stdio.h>
#include<math.h>

int nguyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i =  2; i <= n / 2; i++){
			if(nguyento(i) == 1 && nguyento(n - i) == 1) printf("%d %d ", i, n - i);
		}
		printf("\n");
	}
	return 0;
}
