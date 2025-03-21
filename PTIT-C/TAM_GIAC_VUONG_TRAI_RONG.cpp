#include<stdio.h>
#include<math.h>
#define for(i,a,b) for(int i = a; i <= b; i++)

int main(){
	int n;
	scanf("%d", &n);
	for(i,1,n){
		for(j,1,i){
			if(i == 1 || i == n || j == 1 || j == i) printf("*");
			else printf(".");
		}
		for(j,1,n - i) printf(" ");
		printf("\n");
	}
	return 0;
}
