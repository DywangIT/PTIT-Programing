#include<stdio.h>
#include<math.h>
#include<string.h>

long long a[93];

void fibo(){
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i < 93; i++){
		a[i] = a[i - 1] + a[i - 2];
	}
}

int main(){
	int t; scanf("%d", &t);
	fibo();
	while(t--){
		long long n; scanf("%lld", &n);
		int check = 0;
		for(int i = 0; i < 93; i++){
			if(a[i] == n){
				printf("YES");
				check = 1;
				break;
			}
			if(a[i] > n) break;
		}
		if(check == 0) printf("NO");
		printf("\n");
	}
    return 0;
}
