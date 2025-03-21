#include<stdio.h>
#include<math.h>

int main(){
	int h, c;
	scanf("%d %d", &h, &c);
	if(h <= c){
		for(int i = 1; i <= h; i++){
			for(int j = i; j <= c; j++) printf("%d", j);
			for(int j = 1; j <= i - 1; j++) printf("%d", c - j);
			printf("\n");
		}
	}
	else{
		for(int i = 1; i <= c; i++){
			for(int j = i; j <= c; j++) printf("%d", j);
			for(int j = 1; j <= i - 1; j++) printf("%d", c - j);
			printf("\n");
		}
		for(int i = c + 1; i <= h; i++){
			for(int j = 1; j <= c; j++) printf("%d", i - j + 1);
			printf("\n");
		}
	}
	return 0;
}
