#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char s[105]; gets(s);
	char luu_tu[10][50];
	int n = 0;
	char * token = strtok(s, " ");
	while(token != NULL){
		strcpy(luu_tu[n], token);
		token = strtok(NULL, " ");
		++n;
	}
	for(int i = 0; i < n; i++){
		int check = 1;
		for(int j = 0; j < i; j++){
			if(strcmp(luu_tu[i],luu_tu[j]) == 0){
				check = 0;
				break;
			}
		}
		if(check == 1) printf("%s ", luu_tu[i]);
	}
    return 0;
}
