#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	// tao mang nguyen to
	int b[100], index = 0;
	b[0] = 0; b[1] = 1;
	for(int i = 2; i < 93; i++){
		b[i] = b[i - 1] + b[i - 2];
	}
	//
	
		int n; scanf("%d", &n);
		int a[n+1][n+1];
		int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1, cnt = 0;
		while(h1 <= h2){
			for(int i=c1; i<=c2; i++){
				a[h1][i] = b[cnt];
				++cnt;
			}
			++h1;
			for(int i=h1; i<=h2; i++){
				a[i][c2] = b[cnt];
				++cnt;
			}
			--c2;
			for(int i=c2; i>=c1; i--){
				a[h2][i] = b[cnt];
				++cnt;
			}
			--h2;
			for(int i=h2; i>=h1 ; i--){
				a[i][c1] = b[cnt];
				++cnt;
			}
			++c1;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) printf("%d ", a[i][j]);
			printf("\n");
		}
		
    return 0;
}
