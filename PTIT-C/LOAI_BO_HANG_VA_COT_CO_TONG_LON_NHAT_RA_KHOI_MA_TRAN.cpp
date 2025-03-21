#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t; scanf("%d", &t);
	int test = 1;
	while(t--){
		int h, c;
		scanf("%d %d", &h, &c);
		int a[h + 5][c + 5], b[h + 5][c + 5], tong_hang[h + 5];
		for(int i = 0; i < h; i++){
			for(int j = 0; j < c; j++) scanf("%d", &a[i][j]);
		}
		int sh_max = -1e9, cnt_h = 0;
		
		for(int i = 0; i < h; i++){
			int s = 0;
			for(int j = 0; j < c; j++){
				s += a[i][j];
			}
			tong_hang[i] = s;
			if(s > sh_max) sh_max = s;
		}
		for(int i = 0; i < h; i++){
			if(tong_hang[i] < sh_max){
				for(int j = 0; j < c; j++){
					b[cnt_h][j] = a[i][j];
				}
				++cnt_h;
			}
		}
		
		int m[cnt_h + 5][c + 5], sc_max = -1e9, cnt_c = 0, tong_cot[c + 5];
		for(int j = 0; j < c; j++){
			int s = 0;
			for(int i = 0; i < cnt_h; i++){
				s += b[i][j];
			}
			tong_cot[j] = s;
			if(s > sc_max) sc_max = s;
		}
		for(int j = 0; j < c; j++){
			if(tong_cot[j] < sc_max){
				for(int i = 0; i < cnt_h; i++){
					m[i][cnt_c] = b[i][j];
				}
				++cnt_c;
			}
		}
		printf("Test %d:\n", test);
		
		for(int i = 0; i < cnt_h; i++){
			for(int j = 0; j < cnt_c; j++) printf("%d ", m[i][j]);
			printf("\n");
		}
		++test;
	}
    return 0;
}
