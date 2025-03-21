#include<stdio.h>
#include<math.h>

int main(){
	int h, c;
	scanf("%d %d", &h, &c);
	if(h <= c){
		for(int i = 1; i <= h; i++){
			for(int j = 1; j <= i - 1; j++) printf("%c", c - j + 1 + 96);
			for(int j = i; j <= c; j++) printf("%c", c - i + 1 + 96);
			printf("\n");
		}
	}
	else{
		for(int i = h; i > h - c; i--){
			for(int j = 1; j <= h - i; j++) printf("%c", h - j + 1 + 96);
			for(int j = 1; j <= c - h + i; j++) printf("%c", i + 96);
			printf("\n");
		}
		for(int i = h - c; i >= 1; i--){
			for(int j = h; j >= h - c + 1; j--) printf("%c", j + 96);
			printf("\n");
		}
	}
	return 0;
}
