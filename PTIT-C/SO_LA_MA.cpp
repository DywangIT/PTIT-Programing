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
    int t; scanf("%d", &t);
    while(t--){
        char s[20];
        scanf("%s", s);
        int len = strlen(s);
        int a[len];
        for(int i = 0; i < len; i++){
            if(s[i] == 'I') a[i] = 1;
            else if(s[i] == 'V') a[i] = 5;
            else if(s[i] == 'X') a[i] = 10;
            else if(s[i] == 'L') a[i] = 50;
            else if(s[i] == 'C') a[i] = 100;
            else if(s[i] == 'D') a[i] = 500;
            else if(s[i] == 'M') a[i] = 1000;
        }
        int k = a[len - 1];
        for(int i = len - 2; i >= 0; i--){
            if(a[i] < a[i + 1]) k = k - a[i];
            else k = k + a[i];
        }
        printf("%d\n", k);
    }
    return 0;
}
