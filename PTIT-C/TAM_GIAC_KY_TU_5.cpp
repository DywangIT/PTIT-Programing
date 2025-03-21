#include<stdio.h>
#include<math.h>

int main(){
	int h;
	scanf("%d", &h);
	for(int i = 1; i < h; i++){
		for(int j = 1; j <= h - i + 1; j++) printf("%c", h - 1 + j - 1 - i + 1 + 64);
		printf("\n");
	}
	printf("@");
	return 0;
}
