#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char a[20], b[20];
		scanf("%s %s", &a, &b);
		// tong min
		for(int i = 0; i < strlen(a); i++){
			if(a[i] == '6') a[i] = '5';
		}
		for(int i = 0; i < strlen(b); i++){
			if(b[i] == '6') b[i] = '5';
		}
		printf("%lld ", atoll(a) + atoll(b));
		// tong max
		for(int i = 0; i < strlen(a); i++){
			if(a[i] == '5') a[i] = '6';
		}
		for(int i = 0; i < strlen(b); i++){
			if(b[i] == '5') b[i] = '6';
		}
		printf("%lld\n", atoll(a) + atoll(b));
	}
    return 0;
}
