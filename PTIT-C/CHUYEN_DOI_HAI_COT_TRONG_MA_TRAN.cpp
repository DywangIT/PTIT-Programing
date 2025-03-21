#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int s[m + 5][n + 5];
	for(int i = 0; i < m; i++){
		for(int j = 1; j <= n; j++) scanf("%d ", &s[i][j]);
	}
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 0; i < m; i++){
		int luu = s[i][a];
		s[i][a] = s[i][b];
		s[i][b] = luu;
	}
	for(int i = 0; i < m; i++){
		for(int j = 1; j <= n; j++) printf("%d ", s[i][j]);
		printf("\n");
	}
    return 0;
}
