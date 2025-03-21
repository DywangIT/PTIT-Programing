#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000000;
#define MIN -1000000;
#define ll long long;

//*********Dywang*********//
//*****take dream way*****//

int main(){
    int n;
    while(scanf("%d", &n) != -1){
        if(n != 0){
            // input
            char s1[400], s2[400], s[800];
            scanf("%s %s %s", s1, s2, s);
            // your solution
            char luu[800] = "";
            strcat(luu, strcat(s1,s2));

            char ss[800]; strcpy(ss, luu);
            char tmp[800] = "";

            int lap = 0;
            int check = 0;
            while(strcmp(tmp, luu) != 0){
                strcpy(tmp, "");
                ++lap;
                int cnt = 0; 
                for(int i = n; i < 2 * n; i++){
                    tmp[cnt++] = ss[i];
                    tmp[cnt++] = ss[i - n];
                }
                if(strcmp(s, tmp) == 0){
                    check = 1;
                    break;
                }
                strcpy(ss, tmp);
            }
            if(check) printf("%d\n", lap);
            else printf("-1\n");
        }
    }
    return 0;
}
  