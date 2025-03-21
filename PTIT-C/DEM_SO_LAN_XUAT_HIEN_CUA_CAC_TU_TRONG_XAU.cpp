#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

char* to_lower(char a[]){
	for(int i = 0; i < strlen(a); i++){
		if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
	return a;
}

int main(){
	char s[100];
	gets(s);
	to_lower(s);
	char c[20][50];
	int cnt = 0;
	char *token = strtok(s, " ");
	while(token != NULL){
		strcpy(c[cnt], token);
		++cnt;
		token = strtok(NULL, " ");
	}
	int b[cnt] = {0};
	for(int i = 0; i < cnt; i++){
		if(b[i] == 0){
			int n = 1;
			for(int j = i + 1; j < cnt; j++){
				if(strcmp(c[i],c[j]) == 0){
					++n;
					b[j] = 1;
				}
			}
			printf("%s %d\n", c[i], n);
		}
	}
    return 0;
}
