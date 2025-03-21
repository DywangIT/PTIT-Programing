#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000000;
#define ll long long;

//*********Dywang*********//
//*****take dream way*****//

int main(){
    char s[60];
    scanf("%s", s);
    int len = strlen(s);
    int mang_danh_dau[200] = {};
    int cnt = 0;
    for(int i = 0; i < len; i++){
        int mang_dem[200] = {};
        if(mang_danh_dau[s[i]] == 0){
            for(int j = i + 1; j < len; j++){
                if(s[j] == s[i]) break;
                else if(mang_danh_dau[s[j]] == 0){
                    ++mang_dem[s[j]];
                }
            }
            int index = i + 1;
            while(s[index] != s[i]){
                if(mang_dem[s[index]] == 1) ++cnt;
                ++index;
            }
            mang_danh_dau[s[i]] = 1;
        }
    }
    printf("%d", cnt);
    return 0;
}
