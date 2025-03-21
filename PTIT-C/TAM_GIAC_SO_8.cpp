#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	int cnt = 1;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			for(int j = 0; j < i; j++) printf("%d ", i*(i+1)/2 - j);
			printf("\n");
		}
		else{
			for(int j = 0; j < i; j++) printf("%d ", i*(i-1)/2 + 1 + j);
			printf("\n");
		}
		
	}
    return 0;
}
