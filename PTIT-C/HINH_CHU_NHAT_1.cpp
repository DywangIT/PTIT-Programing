#include<stdio.h>
#include<math.h>

int main(){
	int h, c;
	scanf("%d %d", &h, &c);
	if(h <= c){
		for(int i = 1; i <= h; i++){
			for(int j = i; j <= c; j++) printf("%d", j);
			for(int j = i - 1; j >= 1; j--) printf("%d", j);
			printf("\n");
		}
	}
	else{
		for(int i = 1; i <= c; i++){
			for(int j = i; j <= c; j++) printf("%d", j);
			for(int j = i - 1; j >= 1; j--) printf("%d", j);
			printf("\n");
		}
		for(int i = c + 1; i <= h; i++){
			printf("%d", i);
			for(int j = c - 1; j >= 1; j--) printf("%d", j);
			printf("\n");
		}
	}
	return 0;
}
