#include<stdio.h>
#include<string.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char a[1000], b[1000];
		scanf("%s", a);
		scanf("%s", b);
		
		if(strlen(a) < strlen(b)){
			char c[1000];
			strcpy(c, a);
			strcpy(a, b);
			strcpy(b, c);
		}
		int lena = strlen(a);
		int lenb = strlen(b);
			int nho = 0;
			for(int i = lena - 1, j = lenb - 1; j >= 0; i--, j--){
				int sum = a[i] - '0' + b[j] - '0' + nho;
				if(sum >= 10){
					sum -= 10;
					nho = 1;
				}
				else nho = 0;
				a[i] = sum + '0';
			}
			for(int i = lena - 1 - lenb; i >= 0; i--){
				int sum = a[i] - '0' + nho;
				if(sum >= 10){
					sum -= 10;
					nho = 1;
				}
				else nho = 0;
				a[i] = sum + '0';
			}
			if(nho == 1){
				for(int i = lena; i > 0; i--){
					a[i] = a[i - 1];
				}
				a[0] = nho + '0';
			}
			printf("%s\n", a);
		
		
	}
	return 0;
}
