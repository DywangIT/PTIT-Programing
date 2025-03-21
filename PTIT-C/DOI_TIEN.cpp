#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a = n / 1000;
		int b = (n - a * 1000) / 500;
		int c = (n - a * 1000 - b * 500) / 200;
		int d = (n - a * 1000 - b * 500 - c * 200) / 100;
		int e = (n - a * 1000 - b * 500 - c * 200 - d * 100) / 50;
		int f = (n - a * 1000 - b * 500 - c * 200 - d * 100 - e * 50) / 20;
		int g = (n - a * 1000 - b * 500 - c * 200 - d * 100 - e * 50 - f * 20) / 10;
		int h = (n - a * 1000 - b * 500 - c * 200 - d * 100 - e * 50 - f * 20 - g * 10) / 5;
		int i = (n - a * 1000 - b * 500 - c * 200 - d * 100 - e * 50 - f * 20 - g * 10 - h * 5) / 2;
		int j = (n - a * 1000 - b * 500 - c * 200 - d * 100 - e * 50 - f * 20 - g * 10 - h * 5 - i * 2);
		printf("%d\n", a + b + c + d + e + f + g + h + i + j);
	}
    return 0;
}
