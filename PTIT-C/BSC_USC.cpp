#include<stdio.h>
#include<math.h>

int ucln(int a, int b){
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
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%lld %d", (long long)a * b / ucln(a,b), ucln(a,b));
		printf("\n");
	}
	return 0;
}
