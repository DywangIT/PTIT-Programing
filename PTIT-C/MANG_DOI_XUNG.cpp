#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[105];
		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		int l = 0, r = n - 1;
		int check = 1;
		while(l < r){
			if(a[l] != a[r]){
				check = 0;
				break;
			}
			l += 1;
			r -= 1;
		}
		if(check == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
