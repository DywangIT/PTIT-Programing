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

int main(){
    int n; scanf("%d", &n);
    ts target[n];
    double max = -1e9;
    for(int i = 0; i < n; i++){
        target[i].id = i + 1;
        nhap(&target[i]);
        target[i].tongdiem = target[i].sc1 + target[i].sc2 + target[i].sc3;
        if(target[i].tongdiem > max) max = target[i].tongdiem;
    }
    for(int i = 0; i < n; i++){
        if(target[i].tongdiem == max) in(target[i]);
    }
    // ts target;
    // target.id = 1;
    // nhap(&target);
    // target.tongdiem = target.sc1 + target.sc2 + target.sc3;
    // in(target);
	return 0;
}
