#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char s[100001];
	scanf("%s", &s);
	int len = strlen(s);
	int min = 97;
	for(int i = len - 1; i >= 0; i--){
		if(s[i] < min) s[i] = 0;
		else if(s[i] > min){
			min = s[i];
		}
	}
	for(int i = 0; i < len; i++){
		if(s[i] != 0) printf("%c", s[i]);
	}
	return 0;
}
