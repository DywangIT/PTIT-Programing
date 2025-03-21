#include<stdio.h>
#include<math.h>

int main(){
	int m, n, p, q;
	scanf("%d %d %d %d", &m, &n, &p, &q);
	int a[m][n], b[n][p], c[p][q];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++) scanf("%d", &b[i][j]);
	}
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++) scanf("%d", &c[i][j]);
	}
	int arr1[m][p], arr2[m][q];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			int s = 0;
			for(int k = 0; k < n; k++){
				s += a[i][k] * b[k][j];
			}
			arr1[i][j] = s;
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < q; j++){
			int s = 0;
			for(int k = 0; k < p; k++){
				s += arr1[i][k] * c[k][j];
			}
			arr2[i][j] = s;
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < q; j++){
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
