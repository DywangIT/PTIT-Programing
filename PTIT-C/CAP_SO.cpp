#include<stdio.h>
#include<math.h>

int UCLN(int a, int b){
	while(a != b){
		if(a < b) b -= a;
		else a -= b;
	}
	return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(UCLN(a,b) == UCLN(c,d)) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
