#include<stdio.h>
#include<math.h>
#include<string.h>

int nguyento(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i = 5; i <= sqrt(n); i+= 6){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int a[n + 5][n + 5];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	}
	int max = 0, index;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(nguyento(a[i][j])){
				++cnt;
			}
		}
		if(cnt > max){
			max = cnt;
			index = i;
		}
	}
	printf("%d\n", index + 1);
	for(int j = 0; j < n; j++){
		if(nguyento(a[index][j])) printf("%d ", a[index][j]);
	}
    return 0;
}
