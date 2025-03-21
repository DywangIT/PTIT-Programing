#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000000;
#define MIN -1000000;
#define ll long long;

//Dywang - Take the dream away//

typedef struct Sinh_Vien {
	int id;
	char name[88];
	double A, B, C;
} SV;

void nhap(SV *target, int i){
	target->id = i;
	gets(target->name);
	scanf("%lf %lf %lf", &target->A, &target->B, &target->C);
	getchar();
}

void print(SV target){
	printf("%d %s %.1lf %.1lf %.1lf\n", target.id, target.name, target.A, target.B, target.C);
}

int check(SV target){
	if(target.A < target.B && target.B < target.C) return 1;
	return 0;
}

int main(){
	SV a[8888];
	int choice = 0;
	int n = 0, sosinhvien = 0, masuadoi = 0;
	while(choice != 3){
		scanf("%d", &choice);
		switch(choice){
			case 1:
				scanf("%d", &sosinhvien);
				getchar();
				for(int i = n ; i < n + sosinhvien; i++) nhap(&a[i], i + 1);
				n += sosinhvien;
				printf("%d\n", sosinhvien);
				break;
			case 2:
				scanf("%d", &masuadoi);
				getchar();
				nhap(&a[masuadoi - 1], masuadoi);
				printf("%d\n", masuadoi);
				break;
			case 3:
				for(int i = 0; i < n; i++){
					if(check(a[i])) print(a[i]);
				}
				break;
		}
	}
	return 0;
}













