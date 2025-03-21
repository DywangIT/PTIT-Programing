#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int m, n;
		scanf("%d %d\n", &m, &n);
        int h1[1001] = {};
        int h2[1001] = {};
        int c1[1001] = {};
        int c2[1001] = {};
		char a[m + 1][n + 1];
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
                scanf("%c", &a[i][j]);
                if(a[i][j] == '1'){
                    ++h1[i]; ++c1[j];
                }
                else if(a[i][j] == '2'){
                    ++h2[i]; ++c2[j];
                }
            }
			getchar();
		}
		// for(int i = 1; i <= n; i++){
		// 	for(int j = 1; j <= n; j++) printf("%c ", a[i][j]);
		// 	printf("\n");
		// }
		long long cnt = 0;
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				if(a[i][j] == '1'){
					cnt += (long long)h2[i] * c2[j];
				}
				else if(a[i][j] == '2'){
					cnt += (long long)h1[i] * c1[j];
				}
			}
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
