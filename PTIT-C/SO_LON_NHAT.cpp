#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[105];
		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		int max = 0;
		for(int i = 0; i < n; i++){
			if(a[i] >= max){
				max = a[i];
			} 
		}
		printf("%d\n", max);
		for(int i = 0; i < n; i++){
			if(a[i] == max) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
