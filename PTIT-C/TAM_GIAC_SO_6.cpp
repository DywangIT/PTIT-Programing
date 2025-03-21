#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1 - i; j++) printf("~");
		for(int j = 0; j < i; j++) printf("%d", 2 * j + 2);
		printf("%d", 2 * i + 2);
		for(int j = 0; j < i; j++) printf("%d", 2 * i - 2 * j);
		printf("\n");
	}
    return 0;
}
