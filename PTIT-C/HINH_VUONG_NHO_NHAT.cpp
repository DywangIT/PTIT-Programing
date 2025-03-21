#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int a[5][5], min_x = 1e9, max_x = -1e9, min_y = 1e9, max_y = -1e9;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			scanf("%d", &a[i][j]);
			if(j % 2 == 0){
				if(a[i][j] < min_x) min_x = a[i][j];
				if(a[i][j] > max_x) max_x = a[i][j];
			}
			if(j % 2 != 0){
				if(a[i][j] < min_y) min_y = a[i][j];
				if(a[i][j] > max_y) max_y = a[i][j];
			}
		}
	}
	int m = max_x - min_x;
	int n = max_y - min_y;
	if(m > n) printf("%d", m * m);
	else printf("%d", n * n);
	return 0;
}
