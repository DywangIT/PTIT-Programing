#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = n; j >= n - i + 1; j--) printf("%d", j);
		for(int j = 0; j < 2 * (n - i) - 1; j++) printf("%d", n - i);
		for(int j = 0; j <= i - 1; j++) printf("%d", n - i + j + 1);
		printf("\n");
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = n; j >= i + 3; j--) printf("%d", j);
		for(int j = 1; j <= 2 * i + 3; j++) printf("%d", i + 2);
		for(int j = 0; j < n - i - 2; j++) printf("%d", i + j + 3);
		printf("\n");
	}
}
