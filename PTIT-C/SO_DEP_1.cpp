#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("\n");
		char a[505];
		gets(a);
		int l = 0, r = strlen(a) - 1; 
		int check = 1;
		while(l < r){
			if(a[l] != a[r] || (a[l] - '0') % 2 != 0 || (a[r] - '0') % 2 != 0){
				check = 0;
				break;
			}
			++l;
			--r;
		}
		if(check == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
    return 0;
}
