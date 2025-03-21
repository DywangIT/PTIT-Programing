#include<stdio.h>
#include<math.h>

int UCLN(int a, int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%lld", UCLN(a,b), (long long)a * b / UCLN(a,b));
	return 0;
}
