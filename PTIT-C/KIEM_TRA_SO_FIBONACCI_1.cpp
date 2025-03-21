#include<stdio.h>
#include<math.h>

int fibonacci(int n){
	if(n == 1 || n == 2) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i < 1000000; i++){
		if(n == fibonacci(i)){
			printf("1");
			break;
		}
		if(fibonacci(i) > n){
			printf("0");
			break;
		}
	}
	return 0;
}
