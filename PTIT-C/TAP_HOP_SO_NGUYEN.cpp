#include<stdio.h>
#include<math.h>
#include<string.h>

void sap_xep(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1; j++){
			if(a[j] > a[j + 1]){
				int luu = a[j];
				a[j] = a[j + 1];
				a[j + 1] = luu;
			}
		}
	}
	for(int i = 0; i < n; i++) printf("%d ", a[i]);
	printf("\n");
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int a[1005], b[1005];
	int A[1005] = {}, B[1005] = {};
	for(int i = 0; i < m; i++){
		scanf("%d", &a[i]);
		++A[a[i]];
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
		++B[b[i]];
	}
	int Tap_giao[105], cnt1 = 0;
	for(int i = 0; i < 1005; i++){
		if(A[i] != 0){
			for(int j = 0; j < 1005; j++){
				if(B[j] != 0 && j == i){
					Tap_giao[cnt1] = i;
					++cnt1;
					break;
				}
			}
		}
	}
	int A_B[105], cnt2 = 0;
	for(int i = 0; i < 1005; i++){
		if(A[i] != 0){
			int check = 1;
			for(int j = 0; j < cnt1; j++){
				if(Tap_giao[j] == i){
					check = 0;
					break;
				}
			}
			if(check){
				A_B[cnt2] = i;
				++cnt2;
			}
		}
	}
	int B_A[105], cnt3 = 0;
	for(int i = 0; i < 1005; i++){
		if(B[i] != 0){
			int check = 1;
			for(int j = 0; j < cnt1; j++){
				if(Tap_giao[j] == i){
					check = 0;
					break;
				}
			}
			if(check){
				B_A[cnt3] = i;
				++cnt3;
			}
		}
	}
	sap_xep(Tap_giao, cnt1);
	sap_xep(A_B, cnt2);
	sap_xep(B_A, cnt3);
    return 0;
}
