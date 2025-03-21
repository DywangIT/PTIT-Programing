#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[100];
		gets(s);
		for(int i = 0; i < strlen(s); i++){
			s[i] = tolower(s[i]);
		}
		char c[20][50], cnt = 0;
		char * token = strtok(s, " ");
		while(token != NULL){
			
			strcpy(c[cnt], token);
			c[cnt][0] = toupper(c[cnt][0]);
			++cnt;
			token = strtok(NULL, " ");
		}
		for(int i = 0; i < cnt; i++) printf("%s ", c[i]);
		printf("\n");
	}
    return 0;
}
