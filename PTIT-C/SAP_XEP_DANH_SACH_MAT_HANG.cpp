#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct MatHang
{
    int id;
    char name[1000];
    char nhom[1000];
    double giamua, giaban, loinhuan;
} MH;

void nhap(MH *target){
    getchar();
    gets(target -> name);
    gets(target -> nhom);
    scanf("%lf %lf", &target -> giamua, &target -> giaban);
}

void in(MH target){
    printf("%d %s %s %.2lf", target.id, target.name, target.nhom, target.loinhuan);
    printf("\n");
}

int cmp(const void *x, const void *y){
    MH *a = (MH*)x;
    MH *b = (MH*)y;
    return b->loinhuan - a->loinhuan;
}

int main(){
   
	int t; scanf("%d", &t);
    MH target[t];
    for(int i = 0; i < t; i++){
        target[i].id = i + 1;
        nhap(&target[i]);
        target[i].loinhuan = target[i].giaban - target[i].giamua;
    }
    qsort(target, t, sizeof(MH), cmp);
    for(int i = 0; i < t; i++) in(target[i]);
	return 0;
}
