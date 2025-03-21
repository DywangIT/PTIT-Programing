#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int n){
	if(n < 2) return 0;
	int s = 0, luu = n;
	while(n > 0){
		s += n % 10;
		n /= 10;
	}
	if(s % 5 != 0) return 0;
	for(int i = 2; i * i <= luu; i++){
		if(luu % i == 0) return 0;
	}
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
