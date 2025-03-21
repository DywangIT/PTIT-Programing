#include<stdio.h>
#include<math.h>

int main(){
	int h;
	scanf("%d", &h);
	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= h - i + 1; j++) printf("%c", 2 * i - 1 + 2 * j - 2 + 64);
		printf("\n");
	}
	return 0;
}
