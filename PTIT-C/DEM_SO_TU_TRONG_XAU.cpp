#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char a[205];
		gets(a);
		char * token = strtok(a, " ");
		int cnt = 0;
		while(token != NULL){
			++cnt;
			token = strtok(NULL, " ");
		}
		printf("%d\n", cnt);
	}
    return 0;
}
