#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("@");
		for(int j = 0; j < i - 1; j++) printf("%c", 2 * j + 2 + 64);
		if(i != 0) printf("%c", 2 * (i - 1) + 2 + 64);
		for(int j = 0; j < i - 1; j++) printf("%c", 64 + 2 * (i - 1) - 2 * j);
		if(i != 0) printf("@");
		printf("\n");
	}
    return 0;
}
