#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		int h, c;
		scanf("%d %d", &h, &c);
		int a[h][c];
		for(int i = 0; i < h; i++){
			for(int j = 0; j < c; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", cnt);
		for(int i = 1; i < h; i++){
			for(int j = 1; j < c; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		++cnt;
	}
	
	return 0;
}
