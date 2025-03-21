#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char s[10005];
	gets(s);
	int a[300] = {};
	for(int i = 0; i < strlen(s); i++){
		++a[s[i]];
	}
	if(a[34] % 2 == 0 && a[39] % 2 == 0 && a[40] == a[41] && a[91] == a[93] && a[123] == a[125]) printf("1");
	else printf("0");
    return 0;
}
