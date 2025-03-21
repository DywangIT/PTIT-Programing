#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double n;
		scanf("%lf", &n);
		printf("%.15lf", 1 / n);
		printf("\n");
	}
	return 0;
}
