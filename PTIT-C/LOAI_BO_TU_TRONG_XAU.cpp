#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char s1[105], s2[10];
	gets(s1);
	scanf("%s", s2);
	char * token = strtok(s1, " ");
	while(token != NULL){
		if(strcmp(token, s2) != 0) printf("%s ", token);
		token = strtok(NULL, " ");
	}
    return 0;
}

