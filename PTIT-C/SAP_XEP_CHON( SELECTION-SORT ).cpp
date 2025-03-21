#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int n; scanf("%d", &n);
	int a[105];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n - 1; i++){
		printf("Buoc %d: ", i + 1);
		
		
		int min = a[i];
		for(int j = i + 1; j < n; j++){
			if(a[j] < min){
				min = a[j];
			}
		}
		for(int j = i; j < n; j++){
			if(a[j] == min){
				int luu = a[j];
				a[j] = a[i];
				a[i] = luu;
			}
		}
		
		
		
		
		for(int j = 0; j < n; j++) printf("%d ", a[j]);
		printf("\n");
	}
    return 0;
}
