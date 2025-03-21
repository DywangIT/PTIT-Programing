#include<stdio.h>
#include<math.h>

int main(){
	int h, c;
	scanf("%d %d", &h, &c);
	if(h <= c){
		for(int i = 1; i <= h; i++){
			for(int j = c - i + 1; j >= 1; j--) printf("%d", j);
			for(int j = 1; j <= i - 1; j++) printf("%d", j + 1);
			printf("\n");
		}
	}
	else{
		for(int i = h; i > c; i--){
			for(int j = i; j >= i - c + 1; j--) printf("%d", j);
			printf("\n");
		}
		for(int i = c; i >= 1; i--){
			for(int j = i; j >= 1; j--) printf("%d", j);
			for(int j = 2; j <= h - i - 1; j++) printf("%d", j);
			printf("\n");
		}
	}
	return 0;
}
