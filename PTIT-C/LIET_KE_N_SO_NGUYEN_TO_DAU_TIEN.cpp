#include<stdio.h>
#include<math.h>

int nguyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0, i = 1;
	while(cnt < n){
		if(nguyento(i)){
			printf("%d\n", i);
			++cnt;
		}
		++i;
	}
	return 0;
}
