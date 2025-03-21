#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n + 5], max1, max2;
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	max1 = max2 = -1e9;
	for(int i = 0; i < n; i++){
		if(a[i] > max1) max1 = a[i];
	}
	printf("%d ", max1);
	for(int i = 0; i < n; i++){
		if(a[i] > max2 && a[i] != max1) max2 = a[i];
	}
	printf("%d", max2);
	return 0;
}
