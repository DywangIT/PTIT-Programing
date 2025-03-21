#include <stdio.h>
#include <math.h>

typedef long long ll;

int cmp(const void *a, const void *b){
	ll *x = (ll*)a;
	ll *y = (ll*)b;
	return *x - *y;
}

int search(ll a[], int l, int r, int z){
	while(l <= r){
		int p = (l + r) / 2;
		if(a[p] == z) return 1;
		else if(a[p] > z) r = p - 1;
		else l = p + 1;
	}
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		ll a[n];
		for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
		qsort(a, n, sizeof(ll), cmp);
		int check = 0;
		for(int i = 0; i < n - 2; i++){
			for(int j = i + 1; j < n - 1; j++){
				ll x = a[i] * a[i];
				ll y = a[j] * a[j];
				double tmp = sqrt(x + y);
				int z = tmp;
				if(z == tmp && search(a, j + 1, n - 1, z)){
					printf("YES");
					check = 1;
					break;
				}
			}
			if(check) break;
		}
		if(!check) printf("NO");
		printf("\n");
	}
	return 0;
}