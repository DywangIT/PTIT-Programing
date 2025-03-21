#include<stdio.h>
#include<math.h>

int main(){
	
		int h, c;
		scanf("%d %d", &h, &c);
		int a[h][c], b[c][h];
		for(int i = 0; i < h; i++){
			for(int j = 0; j < c; j++) scanf("%d", &a[i][j]);
		}
		for(int i = 0; i < h; i++){
			for(int j = 0; j < c; j++){
				b[j][i] = a[i][j];
			}
		}
		for(int i = 0; i < c; i++){
			for(int j = 0; j < h; j++) printf("%d ", b[i][j]);
			printf("\n");
		}
	
	return 0;
}
