#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c, delta, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	if(a != 0){
		delta = b * b - 4 * a * c;
		if(delta < 0) printf("NO");
		else if(delta == 0) printf("%.2lf", -b / 2 * a);
		else{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("%.2lf %.2lf", x1, x2);
		}
	}
	else{
		if(b == 0 && c != 0) printf("NO");
		else printf("%.2lf", -c / b);
	}
	return 0;
}
