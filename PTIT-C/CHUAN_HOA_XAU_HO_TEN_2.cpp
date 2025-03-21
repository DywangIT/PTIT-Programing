#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

char* to_lower(char s[]){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	return s;
}

char* to_upper(char s[]){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
	}
	return s;
}

int main(){
		int n; scanf("%d\n", &n);
		char s[n][100];
		for(int i = 0; i < n; i++){
			gets(s[i]);
		}
		for(int i = 0; i < n; i++){
			
			
			to_lower(s[i]);
			char c[20][50], cnt = 0;
			char * token = strtok(s[i], " ");
			while(token != NULL){
				strcpy(c[cnt], token);
				c[cnt][0] = toupper(c[cnt][0]);
				to_upper(c[0]);
				++cnt;
				token = strtok(NULL, " ");
			}
			for(int j = 1; j < cnt - 1; j++) printf("%s ", c[j]);
			printf("%s, %s",c[cnt - 1], c[0]);
			printf("\n");
			
			
		}
		
	
    return 0;
}
