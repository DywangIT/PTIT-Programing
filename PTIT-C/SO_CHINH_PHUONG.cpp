#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int sqr = sqrt(n);
		if(sqr * sqr == n) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
