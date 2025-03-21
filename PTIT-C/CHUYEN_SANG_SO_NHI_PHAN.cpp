#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void np(int n){
  if(n == 0) return;
  np(n/2);
  printf("%d", n%2);
}

int main(){
    int n; scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    np(n);
}
