#include <stdio.h>
#include <math.h>
#include <string.h>

int is_not_dec(char c[]){
	int check = 1;
	for(int i = 0; i < strlen(c) - 1; i++){
		if(c[i + 1] < c[i]){
			check = 0;
			break;
		}
	}
	if(check) return 1;
	return 0;
}


int main(){
	char c[10000][10];
	char s[1000000];
	int cnt = 0;
	while(gets(s)){
		char * token = strtok(s, " ");
		while(token != NULL){
			if(is_not_dec(token)){
				strcpy(c[cnt++], token);
			}
			token = strtok(NULL, " ");
		}
	}
	char in[10000][10] = {};
	int max = 0;
	for(int i = 0; i < cnt; i++){
		if(strcmp(c[i], "") != 0){
			int dem = 1;
			for(int j = i + 1; j < cnt; j++){
				if(strcmp(c[i], c[j]) == 0){
					++dem;
					strcpy(c[j], "");
				}
			}
			if(dem > max) max = dem;
			strcpy(in[dem], c[i]);			
		}
	}
	for(int i = max; i >= 1; i--){
		if(strcmp(in[i], "") != 0) printf("%s %d\n", in[i], i);
	}
	return 0;
}
