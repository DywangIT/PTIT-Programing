#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("%d ", i + 1);
		for(int j = 1; j <= i; j++) printf("%d ", i + 1 + j * (2 * n - j - 1) / 2);
		printf("\n");
	}
    return 0;
}
