#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
// dywang

int main(){
    int chieudai, soden, bankinh;
    scanf("%d %d %d", &chieudai, &soden, &bankinh);
    int s[1005] = {0};
    for(int i = 0; i < soden; i++){
        int x; scanf("%d", &x);
        for(int j = x - bankinh; j <= x + bankinh; j++){
            if(j >= 1 && j <= chieudai){
                s[j] = 1;
            }
        }
    }
    int cnt = 0;
    if(!bankinh){
        for(int i = 1; i <= chieudai; i++){
            if(s[i] == 0) ++cnt;
        }
    }
    else{
        for(int i = 1; i <= chieudai; i++){
            if(s[i] == 0){
                int j = i;
                int vungtoi = 0;
                while(s[j] == 0 && j <= chieudai){
                    ++vungtoi;
                    s[j] = 1;
                    ++j;
                }
                if(vungtoi % (bankinh * 2 + 1) == 0){
                    cnt += vungtoi / (bankinh * 2 + 1);
                }
                else{
                    cnt += vungtoi / (bankinh * 2 + 1) + 1;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}