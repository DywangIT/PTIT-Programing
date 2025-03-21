#include <stdio.h>
#include <math.h>
#include <string.h>

void sw(char a[][11], int *row, int *col){
	for(int i = 1; i <= *row; i++){
		for(int j = 1; j <= *col; j++){
			if(a[i][j] == '1') a[i][j] = '0';
			else a[i][j] = '1';
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	getchar();
	char a[11][11];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) scanf("%c", &a[i][j]);
		getchar();
	}
	int cnt = 0;
	for(int i = n; i >= 1; i--){
		for(int j = n; j >= 1; j--){
			if(a[i][j] == '1'){
				sw(a, &i, &j);
				++cnt;
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}
