#include<stdio.h>
#include<math.h>
#define for(i,a,b) for(int i = a; i <= b; i++)

int main(){
	int h, c;
	scanf("%d %d", &h, &c);
	for(i,0,h - 1){
		for(j,1,i) printf("~");
		for(j,i + 1,i + c) printf("*");
		printf("\n");
	}
	return 0;
}
