#include<stdio.h>
#include<math.h>
#define for(i,a,b) for(int i = a; i <= b; i++)

int main(){
	int n;
	scanf("%d", &n);
	for(i,1,n){
		for(j,1,i) printf("*");
		for(j,1,n - i) printf(" ");
		printf("\n");
	}
	return 0;
}
