#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, a[105], b[30005] = {}, max = 0;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			++b[a[i]];
			if(b[a[i]] > max) max  = b[a[i]];
		} 
		for(int i = 0; i < n ; i++){
			if(b[a[i]] == max){
				printf("%d ", a[i]);
				b[a[i]] = 0;
			}
		}
		printf("\n");
	}
    return 0;
}
