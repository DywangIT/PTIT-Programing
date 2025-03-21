#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000000;
#define MIN -1000000;
#define ll long long;

//Dywang - Take the dream away//

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char digit[100];
		scanf("%s", digit);
		int len = strlen(digit);
		char soxoayvong[100][100];
		for(int i = 0; i < len; i++){
			int cnt = 0;
			for(int j = i; j< len; j++) soxoayvong[i][cnt++] = digit[j];
			for(int j = 0; j < i; j++) soxoayvong[i][cnt++] = digit[j];
			soxoayvong[i][len] = '\0';
		}
		int cnt = 0;
		char tmp[100];
		for(int i = 1; i <= len; i++){
			strcpy(tmp, digit);
			int nho = 0;
			for(int j = len - 1; j >= 0; j--){
				int so = i * (tmp[j] - '0') + nho;
				tmp[j] = so % 10 + '0';
				nho = so / 10;
			}
			if(nho != 0) break;
			for(int i = 0; i < len; i++){
				if(strcmp(soxoayvong[i], tmp) == 0){
					++cnt;
					break;
				}
			}
			//printf("%s\n", tmp);
		}
		//printf("%d", cnt);
		if(cnt == len) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}













