#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000000;
#define MIN -1000000;
#define ll long long;

//Dywang - Take the dream away//

int a[10001];
// my solution : tạo một mảng a với chỉ số là số mũ và có giá trị là cơ số
// thực hiện lấy ra hệ số và số mũ 
void solve(char c[]){
	for(int i = 0; i < strlen(c); i++){
		// đoạn này lấy hệ số
		if(isdigit(c[i])){
			int mu = 0, heso = 0;
			while(c[i] != '*'){
				heso = heso * 10 + c[i] - '0';
				++i;
			}
			i+=3; // nhảy qua *x^ 
			// đoạn này lấy số mũ
			while(isdigit(c[i])){
				mu = mu * 10 + c[i] - '0';
				++i;
			}
			a[mu] += heso;
		}
	}
}

int main(){
    int t; scanf("%d", &t);
    getchar();
    while(t--){
    	char c1[10000], c2[10000];
    	gets(c1); gets(c2);
    	int cnt = 0;
    	memset(a, 0, sizeof(a));
    	solve(c1); solve(c2); // sau khi solve(c1) tại các chỉ số là số mũ của c1 đã tồn tại hệ số và nếu solve(c2) tiếp thì hệ số tại chỉ số số mũ sẽ được cộng thêm
    	for(int i = 10000; i>= 0; i--){
			if(a[i] != 0) ++cnt;
		}
		// in ra theo số mũ giảm dần
		for(int i = 10000; i>= 0; i--){
			if(a[i]){
				printf("%d*x^%d", a[i], i);
				--cnt;
				if(cnt > 0) printf(" + ");
			}
		}
		printf("\n");
	}
    return 0;
}
