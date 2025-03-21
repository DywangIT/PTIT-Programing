#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n < 2) printf("NO");
		int check = 1;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				check = 0;
				break;
			}
		}
		if(check == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
