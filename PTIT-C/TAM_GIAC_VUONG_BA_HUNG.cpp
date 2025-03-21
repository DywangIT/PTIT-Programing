#include <stdio.h>
#include <string.h>
#include <math.h>


int search(long long a[],int l, int r,int k){
  while(l<=r){
    int p = (l+r)/2;
    if(a[p] == k) return 1;
    else if(a[p] > k) r = p-1;
    else l = p+1;
  }
  return 0;
}
long long cmp(const void*a, const void* b){
  long long *x = (long long*)a;
  long long *y = (long long*)b;
  return *x-*y;
}
int main(){
    int t; scanf("%d",&t);
    while(t--){
      int n; scanf("%d",&n);
      long long a[n];
      int ok = 0;
      int ke = 1;
      for(int i = 0;i<n;i++) scanf("%lld",&a[i]);
      qsort(a,n,sizeof(long long),cmp);
      for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
          long long x = a[i]*a[i];
          long long y = a[j]*a[j];
          double k = sqrt(x+y);
          int K = k;
          if(K == k && search(a,j+1,n-1,K) == 1){
            ke = 0;
            ok = 1;
            printf("YES\n");
            break;
          }
        }
        if(ok) break;
      }
     if(ke) printf("NO\n");
}
}
