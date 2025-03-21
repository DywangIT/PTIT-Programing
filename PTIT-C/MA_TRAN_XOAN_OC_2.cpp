#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int m, n; scanf("%d %d", &m, &n);
		int a[m][n];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
		}
		int cnt = 1;
		int h1 = 0, h2 = m - 1, c1 = 0, c2 = n - 1;
		while(cnt <= m * n){
			if(c1 < c2){
				for(int i = c1; i <= c2; i++){
					printf("%d ", a[h1][i]);
					++cnt;
				}
				++h1;
			}
			if(cnt > m * n) break;
			if(h1 < h2){
				for(int i = h1; i <= h2; i++){
					printf("%d ", a[i][c2]);
					++cnt;
				}
				--c2;
			}
			if(cnt > m * n) break;
			if(c2 > c1){
				for(int i = c2; i >= c1; i--){
					printf("%d ", a[h2][i]);
					++cnt;
				}
				--h2;
			}
			if(cnt > m * n) break;
			if(h2 > h1){
				for(int i = h2; i >= h1; i--){
					printf("%d ", a[i][c1]);
					++cnt;
				}
				++c1;
			}
		}
		printf("\n");
	}
	return 0;
}
