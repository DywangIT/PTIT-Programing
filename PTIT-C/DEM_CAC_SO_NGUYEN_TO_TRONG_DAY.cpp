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
	int t;
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		int n; 
		scanf("%d", &n);
		int a[n], b[100000] = {}, max = -1e9;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(nguyento(a[i])){
				++b[a[i]];
				if(a[i] > max) max = a[i];
			}
		}
		printf("Test %d:\n", cnt);
		for(int i = 0; i <= max; i++){
			if(b[i] != 0){
				printf("%d xuat hien %d lan\n", i, b[i]);
				b[i] = 0;
			}
		}
		++cnt;
	}
	
	return 0;
}
