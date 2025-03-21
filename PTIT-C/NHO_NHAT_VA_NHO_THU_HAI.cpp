#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n + 5], min1, min2;
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	min1 = min2 = 1e9;
	for(int i = 0; i < n; i++){
		if(a[i] < min1) min1 = a[i];
	}
	printf("%d ", min1);
	for(int i = 0; i < n; i++){
		if(a[i] < min2 && a[i] != min1) min2 = a[i];
	}
	printf("%d", min2);
	return 0;
}
