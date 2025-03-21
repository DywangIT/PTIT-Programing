#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main(){
	int t; scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int m, n; scanf("%d %d", &m, &n);
		int a[m][n];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				for(int x = i; x < m; x++){
					for(int y = j; y < n; y++){
						if(a[i][j] > a[x][y]){
							int tmp = a[i][j];
							a[i][j] = a[x][y];
							a[x][y] = tmp;
						}
					}
				}
			}
		}
		printf("Test %d:\n", k);
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++) printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	return 0;
}
