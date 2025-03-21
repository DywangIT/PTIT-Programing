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
    char s[100]; scanf("%s", s);
    int len = strlen(s);
    int a[100] = {};
    a[len - 1] = 1;
    int maxx = MIN;
    for(int i = len - 2; i >= 0; i--){
        int max = 0;
        for(int j = i + 1; j < len; j++){
            if(a[j] > max && s[j] > s[i]) max = a[j];
        }
        a[i] = max + 1;
        if(a[i] > maxx) maxx = a[i];
    }
    printf("%d", 26 - maxx);
    return 0;
}
