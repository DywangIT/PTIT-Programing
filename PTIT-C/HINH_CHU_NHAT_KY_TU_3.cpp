#include<stdio.h>
#include<math.h>

int main(){
	int h, c;
	scanf("%d %d", &h, &c);
	if(h <= c){
		for(int i = 1; i <= h; i++){
			if(i == 1){
				printf("@");
				for(int j = 1; j <= c - 1; j++) printf("%c", j + 64);
				printf("\n");
			}
			else{
				for(int j = 1; j <= c - i; j++) printf("%c", j + i - 2 + 64);
				for(int j = 1; j <= i; j++) printf("%c", c - 1 + 64);
				printf("\n");
			}
		}
	}
	else{
		for(int i = 1; i <= c; i++){
			if(i == 1){
				printf("@");
				for(int j = 1; j <= c - 1; j++) printf("%c", j + 64);
				printf("\n");
			}
			else{
				for(int j = 1; j <= c - i; j++) printf("%c", j + i - 2 + 64);
				for(int j = 1; j <= i; j++) printf("%c", c - 1 + 64);
				printf("\n");
			}
		}
		for(int i = 1; i <= h - c; i++){
			for(int j = 1; j <= c; j++) printf("%c", c - 1 + 64);
			printf("\n");
		}
	}
	return 0;
}
