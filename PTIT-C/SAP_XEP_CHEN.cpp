#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int n; scanf("%d", &n);
	int a[105];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++){
		printf("Buoc %d: ", i);
		for(int j = 0; j <= i; j++) printf("%d ", a[j]);
		int cnt = i + 1, luu = a[i + 1];
		while(luu < a[cnt - 1]){
			a[cnt] = a[cnt - 1];
			--cnt;
			if(cnt == 0) break;
		}
		a[cnt] = luu;
		printf("\n");
	}
    return 0;
}
