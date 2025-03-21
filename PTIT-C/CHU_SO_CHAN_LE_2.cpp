#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int chan = 0, le = 0;
		while(n > 0){
			int so_tach_ra = n % 10;
			if(so_tach_ra % 2 == 0) ++chan;
			else ++le;
			n /= 10;
		}
		printf("%d %d", le, chan);
		printf("\n");
	}
	return 0;
}
