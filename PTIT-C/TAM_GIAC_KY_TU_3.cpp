#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("%c ", i + 1 + 64);
		for(int j = 1; j <= i; j++) printf("%c ", i + 1 + j * (2 * n - j - 1) / 2 + 64);
		printf("\n");
	}
    return 0;
}
