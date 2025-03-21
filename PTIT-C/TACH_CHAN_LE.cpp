#include<stdio.h>
#include<math.h>

int main(){
	int n, a[105];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int chan[105], le[105], cnt_chan = 0, cnt_le = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			chan[cnt_chan] = a[i];
			++cnt_chan;
		}
		else{
			le[cnt_le] = a[i];
			++cnt_le;
		}
	}
	for(int i = 0; i < cnt_chan; i++) printf("%d ", chan[i]);
	printf("\n");
	for(int i = 0; i < cnt_le; i++) printf("%d ", le[i]);
	return 0;
}
