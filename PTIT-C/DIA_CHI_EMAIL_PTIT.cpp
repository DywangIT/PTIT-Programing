#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

char * to_lower(char s[]){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	return s;
}

int main(){
	char s[55];
	gets(s);
	to_lower(s);
	char c[20][50];
	int n = 0;
	char * token = strtok(s, " ");
	while(token != NULL){
		strcpy(c[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n - 1; i++) printf("%c", c[i][0]);
	printf("%s@ptit.edu.vn", c[n - 1]);
	
    return 0;
}
