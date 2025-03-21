#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int s[m + 5][n + 5];
	for(int i = 1; i <= m; i++){
		for(int j = 0; j < n; j++) scanf("%d ", &s[i][j]);
	}
	int a, b;
	scanf("%d %d", &a, &b);
	for(int j = 0; j < n; j++){
		int luu = s[a][j];
		s[a][j] = s[b][j];
		s[b][j] = luu;
	}
	for(int i = 1; i <= m; i++){
		for(int j = 0; j < n; j++) printf("%d ", s[i][j]);
		printf("\n");
	}
    return 0;
}

