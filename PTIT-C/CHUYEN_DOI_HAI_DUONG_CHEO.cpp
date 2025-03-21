#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int m; scanf("%d", &m);
	int a[m + 5][m + 5];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
	}
	for(int i = 0; i < m; i++){
		int luu = a[i][i];
		a[i][i] = a[i][m - i - 1];
		a[i][m - i - 1] = luu;
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
    return 0;
}
