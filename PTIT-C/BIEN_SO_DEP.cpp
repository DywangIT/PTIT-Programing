#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char a[20];
		gets(a);
		int check = 0;
		if(a[6] < a[7] && a[7] < a[8] && a[8] < a[10] && a[10] < a[11]) check = 1;
		if(a[6] == a[7] && a[7] == a[8] && a[10] == a[11]) check = 1;
		if((a[6] == '6' || a[6] == '8') && (a[7] == '6' || a[7] == '8') && (a[8] == '6' || a[8] == '8') && (a[10] == '6' || a[10] == '8') && (a[11] == '6' || a[11] == '8')) check = 1;		
		if(check == 1) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
