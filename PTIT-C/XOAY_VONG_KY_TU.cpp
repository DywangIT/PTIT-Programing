#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000000;
#define MIN -1000000;
#define ll long long;

//Dywang - Take the dream away//

void reset(char tar[], int len){
    tar[len] = tar[0];
    for(int i = 0; i < len; i++){
        tar[i] = tar[i + 1];
    }
    tar[len] = '\0';
}

int solve(char x[], char tar[], int len){
    for(int i = 0; i < len; i++){
        int check = 0;
        if(x[i] == tar[0]){
            int j = i;
            while(x[j] == tar[j - i] && j < len) ++j;
            if(j == len) check = 1;
            if(check){
                for(int k = 0; k < i; k++){
                    if(x[k] != tar[len - i + k]){
                        check = 0;
                        break;
                    }
                }
            }
            if(check) return i;
        }
    }
    return -1;
}

int main(){
    int n; scanf("%d", &n);
    getchar();
    char c[51][51];
    for(int i = 0; i < n; i++) gets(c[i]);
    char tar[51] = {};
    strcpy(tar, c[0]);
    int len = strlen(tar);
    int res = MAX;
    for(int i = 0; i < len; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            int tmp = solve(c[j], tar, len);
            if(tmp == -1){
                printf("-1");
                return 0;
            }
            cnt += tmp;
        }
        reset(tar, len);
        if(cnt < res) res = cnt;
    }
    printf("%d", res);
    return 0;
}
