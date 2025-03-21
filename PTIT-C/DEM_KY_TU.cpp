#include<stdio.h>
#include<math.h>
#include<string.h>

int alpha(char c){
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return 1;
	return 0;
}

int digit(char c){
	if(c >= '0' && c <= '9') return 1;
	return 0;
}

int main(){
	char s[100000];
	gets(s);
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < strlen(s); i++){
		if(alpha(s[i])) ++cnt1;
		if(digit(s[i])) ++cnt2;
	}
	printf("%d %d %d", cnt1, cnt2, strlen(s) - cnt1 - cnt2);
    return 0;
}
