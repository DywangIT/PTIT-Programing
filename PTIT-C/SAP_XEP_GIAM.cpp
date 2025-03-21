#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n + 5];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if(a[j + 1] > a[j]){
				int luu = a[j + 1];
				a[j + 1] = a[j];
				a[j] = luu;
			}
		}
	}
	for(int i = 0; i < n; i++) printf("%d ", a[i]);
	return 0;
}
