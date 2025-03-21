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
			if(a[i] % 2 == 0) printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
