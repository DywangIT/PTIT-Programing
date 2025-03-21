#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("\n");
		char a[505];
		gets(a);
		int check = 1;
		int s = 0;
		if(a[strlen(a) - 1] != '8') check = 0;
		for(int i = 0; i < strlen(a); i++){
			s += a[i] - 48;
		}
		if(s % 10 != 0) check = 0;
		if(check == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
    return 0;
}
