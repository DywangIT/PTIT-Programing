#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000000;
#define MIN -1000000;
#define ll long long;

//Dywang - Take the dream away//

struct Sinh_vien{
	int id;
	char name[100];
	double A, B, C;
};

typedef struct Sinh_vien SV;

void nhap(SV *target, int i){
	target->id = i;
	gets(target->name);
	scanf("%lf %lf %lf", &target->A, &target->B, &target->C);
	getchar();
}

int cmp(const void *x, const void *y){
	SV *a = (SV *)x;
	SV *b = (SV *)y;
	return (a->A + a->B + a->C) - (b->A + b->B + b->C);
}

void print(SV a){
	printf("%d %s %.1lf %.1lf %.1lf\n", a.id, a.name, a.A, a.B, a.C);
}

int main(){
    SV a[10000];
    int choice = 0;
    int n = 0, tmp1, tmp2;
    while(choice != 3){
    	scanf("%d", &choice);
    	switch(choice){
    		case 1:
    			scanf("%d", &tmp1);
    			getchar();
    			for(int i = n; i < n + tmp1; i++) nhap(&a[i], i + 1);
    			n += tmp1;
    			printf("%d\n", tmp1);
    			break;
    		case 2:
    			scanf("%d",&tmp2);
    			getchar();
    			nhap(&a[tmp2 - 1], tmp2);
    			printf("%d\n", a[tmp2 - 1].id);
    			break;
    		case 3:
    			qsort(a, n, sizeof(SV), cmp);
    			for(int i = 0; i < n; i++) print(a[i]);
    			break;
		}
	}
    return 0;
}

