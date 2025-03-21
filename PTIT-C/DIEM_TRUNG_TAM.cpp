#include<stdio.h>
#include<math.h>

int main(){
	int n, a[100005];
	scanf("%d", &n);
	for(int i = 0; i < n * 2 - 2; i++) scanf("%d", &a[i]);
	int diem_trung_tam;
	if(a[0] == a[2] || a[0] == a[3]) diem_trung_tam = a[0];
	else if(a[1] == a[2] || a[1] == a[3]) diem_trung_tam = a[1];
	else{
		printf("No");
		return 0;
	}
	for(int i = 2; i < n - 1; i++){
		if(a[2 * i] != diem_trung_tam && a[2 * i + 1] != diem_trung_tam){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}
