#include <stdio.h>
#include <math.h>

int lcm(int a, int b){
	int tmp = a * b;
	while(a * b != 0){
		if(a > b) a %= b;
		else b %= a;
	}
	return tmp / (a + b);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		printf("%d ", a[0]);
		for(int i = 0; i < n - 1; i++) printf("%d ", lcm(a[i], a[i + 1]));
		printf("%d\n", a[n - 1]);
	}
	return 0;
}
