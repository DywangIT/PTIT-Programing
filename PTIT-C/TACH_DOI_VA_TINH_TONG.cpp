#include <stdio.h>
#include <string.h>
#include <math.h>

void lenle(char a[], int len){
	for(int i = len; i >= 0; i--){
		a[i] = a[i - 1];
	}
	a[0] = '0';
	a[len + 1] = '\0';
}

int main(){
	char s[300];
	scanf("%s", s);
	int len = strlen(s);
	char s1[300], s2[300];
	while(len > 1){
		if(len % 2){
			lenle(s, len);
			++len;
		}		
		for(int i = 0; i < len / 2; i++){
			s1[i] = s[i];
		}
		s1[len / 2] = '\0';
		int cnt = 0; 
		for(int i = len / 2; i < len; i++){
			s2[cnt] = s[i];
			++cnt;
		}		
		len = len / 2;
		int nho = 0;
		for(int i = len - 1; i >= 0; i--){
			int sum = s1[i] - '0' + s2[i] - '0' + nho;
			if(sum >= 10){
				sum -= 10;
				nho = 1;
			}
			else nho = 0;
			s1[i] = sum + '0';
		}
		if(nho == 1){
			lenle(s1, len);
			++len;
			s1[0] = nho + '0';
		}
		strcpy(s, s1);
		printf("%s\n", s);
	}
	return 0;
}
