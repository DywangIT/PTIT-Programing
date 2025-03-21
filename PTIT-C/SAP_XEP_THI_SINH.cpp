#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct thisinh
{
    int id;
    char name[100], dob[100];
    double sc1, sc2, sc3;
    double tongdiem;
} ts;

void nhap(ts *target){
    getchar();
    gets(target -> name);
    gets(target -> dob);
    scanf("%lf %lf %lf", &target->sc1, &target->sc2, &target->sc3);
}

void in(ts target){
    printf("%d %s %s %.1lf", target.id, target.name, target.dob, target.tongdiem);
    printf("\n");
}

int cmp(const void *a, const void *b){
    ts * x = (ts*)a;
    ts * y = (ts*)b;
    return y->tongdiem - x->tongdiem > 0;
}

int main(){
    int n; scanf("%d", &n);
    ts target[n];
    for(int i = 0; i < n; i++){
        target[i].id = i + 1;
        nhap(&target[i]);
        target[i].tongdiem = target[i].sc1 + target[i].sc2 + target[i].sc3;
    }
    qsort(target, n, sizeof(ts), cmp);
    for(int i = 0; i < n; i++){
        in(target[i]);
    }
	return 0;
}
