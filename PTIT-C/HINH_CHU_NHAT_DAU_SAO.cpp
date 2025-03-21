#include<stdio.h>
#include<math.h>

int main(){
	int cao, rong;
	scanf("%d %d", &rong, &cao);
	for(int i = 0; i < cao; i++){
		for(int j = 0; j < rong; j++){
			if(i == 0 || i == cao - 1 || j == 0 || j == rong - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
