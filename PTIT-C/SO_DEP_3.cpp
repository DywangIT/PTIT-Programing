#include<stdio.h>
#include<math.h>
#include<string.h>

int nguyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("\n");
		char a[505];
		gets(a);
		int l = 0, r = strlen(a) - 1; 
		int check = 1;
		while(l < r){
			if(a[l] != a[r] || nguyento(a[l] - 48) == 0 || nguyento(a[r] - 48) == 0){
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
