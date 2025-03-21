#include<stdio.h>
#include<math.h>

int check(int n){
	int s = 0;
	while(n > 0){
		s += n % 10;
		n /= 10;
	}
	if(s % 10 != 0) 
		return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(check(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
