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
	int t; scanf("%d\n", &t);
	int test = 1;
	while(t--){
		char a[205], b[25];
		gets(a);
		gets(b);
		int n = 0;
		char c[50][50];
		char * token = strtok(a, " ");
		while(token != NULL){
			strcpy(c[n], token);
			++n;
			token = strtok(NULL, " ");
		}
		printf("Test %d: ", test);
		char luu[50];
		for(int i = 0; i < n - 1; i++){
			strcpy(luu, c[i]);
			if(strcmp(to_lower(c[i]), to_lower(b)) != 0) printf("%s ", luu);
		}
		strcpy(luu, c[n - 1]);
		if(strcmp(to_lower(c[n - 1]), to_lower(b)) != 0) printf("%s", luu);
		printf("\n");
		++test;
	}
	
    return 0;
}
