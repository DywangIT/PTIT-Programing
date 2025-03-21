#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	// nhap
	char a[105], b[105];
	gets(a);
	gets(b);
	// luu token sang mang moi
	char m[50][50], n[50][50];
	int cntm = 0, cntn = 0;
	char * token_a = strtok(a, " ");
	while(token_a != NULL){
		strcpy(m[cntm], token_a);
		++cntm;
		token_a = strtok(NULL, " ");
	}
	char * token_b = strtok(b, " ");
	while(token_b != NULL){
		strcpy(n[cntn], token_b);
		++cntn;
		token_b = strtok(NULL, " ");
	}
	// xau moi
	int arr[105] = {};
	char s[100][105];
	int cnt = 0;
	for(int i = 0; i < cntm; i++){
		if(arr[i] == 0){
			for(int j = i + 1; j < cntm; j++){
				if(strcmp(m[i], m[j]) == 0) arr[j] = 1;
			}
			int check = 1;
			for(int j = 0; j < cntn; j++){
				if(strcmp(m[i], n[j]) == 0){
					check = 0;
					break;
				}
			}
			if(check == 1){
				strcpy(s[cnt], m[i]);
				++cnt;
			}
		}
	}
	for(int i = 0; i < cnt - 1; i++){
		for(int j = 0; j < cnt - 1; j++){
			if(strcmp(s[i], s[i + 1]) > 0){
				char c[100];
				strcpy(c, s[i]);
				strcpy(s[i], s[i + 1]);
				strcpy(s[i + 1], c);
			}
		}
	}
	for(int i = 0; i < cnt; i++) printf("%s ", s[i]);
    return 0;
}
