#include<stdio.h>
#include<math.h>

int main(){
	int h, c;
	scanf("%d %d", &h, &c);
	if(h <= c){
		for(int i = 1; i <= h; i++){
			for(int j = h - i + 1; j <= c - 1; j++) printf("%c", j + 64);
			for(int j = 1; j <= h - i + 1; j++) printf("%c", c + 64);
			printf("\n");
		}
	}
	else{
		for(int i = 1; i <= h - c; i++){
			for(int j = 1; j <= c; j++) printf("%c", c + 64);
			printf("\n");
		}
		for(int i = 1; i <= c; i++){
			for(int j = c - i + 1; j <= c - 1; j++) printf("%c", j + 64);
			for(int j = 1; j <= c - i + 1; j++) printf("%c", c + 64);
			printf("\n");
		}
	}
	return 0;
}
