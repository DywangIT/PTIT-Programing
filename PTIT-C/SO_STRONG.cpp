#include<stdio.h>
#include<math.h>
// Thuat toan giai thua bang DE QUY
//int gt(int a){
//	if(a == 1) 
//		return 1;
//	return a * gt(a - 1);
//}

int main(){
	int n;
	scanf("%d", &n);
	int luu = n, s = 0, so_tach_ra;
	while(n > 0){
		so_tach_ra = n % 10;
		int gt = 1;
		for(int i = so_tach_ra; i >= 1; i--){
			gt *= i;
		}
		s += gt;
		n /= 10;
	}
	if(s == luu) printf("1");
	else printf("0");
	return 0;
}
