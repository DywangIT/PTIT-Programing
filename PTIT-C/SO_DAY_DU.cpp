#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[1005];
		scanf("%s", &s);
		int a[10] = {};
		int next = 1;
		for(int i = 0; i < strlen(s); i++){
			if(s[0] == '0' || s[i] < '0' || s[i] > '9'){
				printf("INVALID");
				next = 0;
				break;
			}
			else ++a[s[i] - 48];
		}
		if(next == 1){
			int check = 1;
			for(int i = 0; i < 10; i++){
				if(a[i] == 0){
					check = 0;
					break;
				}
			}
			if(check == 1) printf("YES");
			else printf("NO");
		}
		printf("\n");
	}
    return 0;
}
