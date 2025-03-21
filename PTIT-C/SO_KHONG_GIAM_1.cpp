#include<stdio.h>
#include<math.h>

int So_Khong_Giam(int n){
	int so_so_sanh = 10;
	while(n > 0){
		int so_tach_ra = n % 10;
		if(so_tach_ra > so_so_sanh)
			return 0;
		so_so_sanh = so_tach_ra;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int so_lon_nhat = 1;
		while(n--){
			so_lon_nhat *= 10;
		}
		for(int i = so_lon_nhat / 10; i <= so_lon_nhat - 1; i++){
			if(So_Khong_Giam(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
