#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		int n; 
		scanf("%d", &n);
		int a[n], b[100000] = {};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			++b[a[i]];
		}
		printf("Test %d:\n", cnt);
		for(int i = 0; i < n; i++){
			if(b[a[i]] != 0){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
		++cnt;
	}
	
	return 0;
}
