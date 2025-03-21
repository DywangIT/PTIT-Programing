#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s = ' ';
		int c = 0, l = 0, d = 0;
		while(s == ' '){
			++d;
			int n; scanf("%d", &n);
			if(n % 2 == 0) ++c;
			else ++l;
			s = getchar();
		}
		if(d % 2 == 0 && c > l) printf("YES\n");
		else if(d % 2 != 0 && l > c) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
