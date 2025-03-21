#include<stdio.h>

int nguyento(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i = 5; i * i <= n; i+=6){
		if(n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	}
	int s = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(nguyento(a[i][j])) s += a[i][j];
		}
	}
	printf("%d", s);
}
