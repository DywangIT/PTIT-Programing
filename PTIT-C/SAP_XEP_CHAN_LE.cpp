#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, a[105];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int chan[105], le[105], cntc = 0, cntl = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			chan[cntc] = a[i];
			++cntc;
		}
		else{
			le[cntl] = a[i];
			++cntl;
		}
	}
	for(int i = 0; i < cntc; i++){
		for(int j = 0; j < cntc - 1; j++){
			if(chan[j + 1] < chan[j]){
				int luu = chan[j];
				chan[j] = chan[j + 1];
				chan[j + 1] = luu;
			}
		}
	}
	for(int i = 0; i < cntl; i++){
		for(int j = 0; j < cntl - 1; j++){
			if(le[j + 1] < le[j]){
				int luu = le[j];
				le[j] = le[j + 1];
				le[j + 1] = luu;
			}
		}
	}
	for(int i = 0; i < cntc; i++) printf("%d ", chan[i]);
	for(int i = 0; i < cntl; i++) printf("%d ", le[i]);
    return 0;
}
