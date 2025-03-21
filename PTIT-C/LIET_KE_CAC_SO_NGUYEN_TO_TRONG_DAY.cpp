#include<stdio.h>
#include<math.h>

int nguyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	
		
		int n, cnt = 0;
		scanf("%d", &n);
		int a[n], b[100000] = {};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(nguyento(a[i])){
				b[cnt] = a[i];
				++cnt;
			}
		}
		printf("%d ", cnt);
		for(int i = 0; i < cnt; i++){
			printf("%d ", b[i]);
		}
	
	return 0;
}
