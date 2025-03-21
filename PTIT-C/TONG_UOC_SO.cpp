#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int a[3000003] = {}; int b[3000003] = {};

void sum(){
	for(int i = 2; i < 3000003; i++){
		if(a[i] == 0){
			for(int j = i; j < 3000003; j+= i){
				int k = j; 
				while(k % i == 0){
					k /= i;
					b[j] += i;
				}
				a[j] = 1;
			}
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	long long s = 0;
	sum();
	while(n--){
		int x; scanf("%d", &x);
		s += b[x];
	}
	printf("%lld", s);
    return 0;
}
