#include<stdio.h>
#include<math.h>
#include<string.h>

int nguyento(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i = 5; i <= sqrt(n); i += 6){
		if(n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int main(){
	// tao mang nguyen to
	int b[300], index = 0;
	for(int i = 2; i < 1900; i++){
		if(nguyento(i)){
			b[index] = i;
			++index;
		}
	}
	//
	int t; scanf("%d", &t);
	int test = 1;
	while(t--){
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
		printf("Test %d:\n", test);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) printf("%d ", a[i][j]);
			printf("\n");
		}
		++test;
	}
    return 0;
}
