#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
	char c[10000][10];
	char s[1000000];
	int cnt = 0;
	int max = 0;
	while(gets(s)){
		char * token = strtok(s, " ");
		while(token != NULL){
			strcpy(c[cnt++], token);
			if(strlen(token) > max) max = strlen(token);
			token = strtok(NULL, " ");
		}
	}
	
	for(int i = 0; i < cnt; i++){
		if(strlen(c[i]) == max){
			int dem = 1;
			for(int j = i + 1; j < cnt; j++){
				if(strcmp(c[i], c[j]) == 0){
					++dem;
					strcpy(c[j], "");
				}
			}
			printf("%s %d %d\n", c[i], max, dem);			
		}
	}
	return 0;
}
