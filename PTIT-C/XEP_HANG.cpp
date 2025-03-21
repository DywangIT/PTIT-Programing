#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int n; scanf("%d", &n);
	int a[2 * n];
	for(int i = 0; i < 2 * n; i++) scanf("%d", &a[i]);
	int x[105], y[105];
	for(int i = 0; i < n; i++){
		x[i] = a[2 * i];
		y[i] = a[2 * i + 1];
	}
	for(int j = 0; j < n - 1; j++){
		for(int i = 0; i < n - 1; i++){
			if(x[i] > x[i + 1]){
				int luux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = luux;
				int luuy = y[i];
				y[i] = y[i + 1];
				y[i + 1] = luuy;
			}
		}
	}
	int time = x[0] + y[0];
	for(int i = 1; i < n; i++){
		if(time > x[i]) time = time + y[i];
		else time = x[i] + y[i];
	}
	printf("%d", time);
    return 0;
}
