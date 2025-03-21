#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[1005];
		gets(s);
		int chan = 0, check = 1;
		for(int i = 0; i < strlen(s); i++){
			if(s[0] == '0' || s[i] < '0' || s[i] > '9'){
				printf("INVALID");
				check = 0;
				break;
			}
			if(s[i] % 2 == 0) ++chan;
		}
		if(check == 1){
			if((strlen(s) % 2 == 0 && chan > strlen(s) / 2) || (strlen(s) % 2 != 0 && chan <= strlen(s) / 2)) printf("YES");
			else printf("NO");
		}
		printf("\n");
	}
	
    return 0;
}
