#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[105];
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			int check = 1;
			if(a[i] < 2) check = 0;
			for(int j = 2; j <= sqrt(a[i]); j++){
				if(a[i] % j == 0){
					check = 0;
					break;
				} 
			}
			if(check == 1) printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
