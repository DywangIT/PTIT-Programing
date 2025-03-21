#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct pokemon
{
    char type[100];
    int k, m;
} po;

void nhap(po *target){
    scanf("%s %d %d", &target->type, &target->k, &target->m);
}

int main(){
    int n; scanf("%d", &n);
    int max = -1e9;
    int cnt = 0;
    po target[n];
    for(int i = 0; i <n; i++){
        nhap(&target[i]);
        if(target[i].m >= target[i].k){
            int x = target[i].m % (target[i].k - 2);
            if(x >= 2) x = target[i].m / (target[i].k - 2);
            else x = target[i].m / (target[i].k - 2) - 1;
            cnt += x;
            if(x > max){
                max = x;
            }
            target[i].m = x;
        }
    }
    printf("%d\n", cnt);
    for(int i = 0; i < n; i++){
        if(target[i].m == max){
            printf("%s\n", target[i].type);
            break;
        }
    }
	return 0;
}
