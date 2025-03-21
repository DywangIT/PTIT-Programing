#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int s = 0;
	if(a < b){
		for(int i = a; i <= b; i++) s += i;
	}
	else{
		for(int i = b; i <= a; i++) s += i;
	}
	printf("%d", s);
	return 0;
}
