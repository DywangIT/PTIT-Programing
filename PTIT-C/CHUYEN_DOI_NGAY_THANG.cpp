#include<stdio.h>

int main(){
	int so_ngay, nam, tuan, ngay;
	scanf("%d", &so_ngay);
	nam = so_ngay / 365;
	tuan = (so_ngay - 365 * nam) / 7;
	ngay = (so_ngay - 365 * nam - 7 * tuan);
	printf("%d %d %d", nam, tuan, ngay);
	return 0;
}
