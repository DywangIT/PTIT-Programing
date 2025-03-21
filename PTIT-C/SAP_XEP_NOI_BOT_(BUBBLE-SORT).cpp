#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	int a[105];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	// bubblesort
	for(int i = 0; i < n - 1; i++){
		int check = 0;
		for(int j = 0; j < n - 1; j++){
			if(a[j] > a[j + 1]){
				int luu = a[j];
				a[j] = a[j + 1];
				a[j + 1] = luu;
				check = 1;
			}
		}
		if(check == 0) break;
		if(check == 1){
			printf("Buoc %d: ", i + 1);
			for(int j = 0; j < n; j++) printf("%d ", a[j]);
			check = 0;
		}
		printf("\n");
	}
    return 0;
}
