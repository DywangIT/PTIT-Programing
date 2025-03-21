#include <stdio.h>
#include <math.h>
#include <string.h>

int tn(char c[]){
	int l = 0;
	int r = strlen(c) - 1;
	int check = 1;
	while(l < r){
		if(c[l] != c[r]){
			check = 0;
			break;
		}
		++l; --r;
	}
	if(check) return 1;
	return 0;
}

int main(){
	char c[10000][100];
	char s[1000000];
	int cnt = 0;
	int max = 0;
	while(gets(s)){
		char * token = strtok(s, " ");
		while(token != NULL){
			if(tn(token)){
				if(strlen(token) > max) max = strlen(token);
				strcpy(c[cnt++], token);
			}
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
			printf("%s %d\n", c[i], dem);
		}
	}
	return 0;
}
 //while (gets(s)) {