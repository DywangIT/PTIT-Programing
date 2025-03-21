#include <stdio.h>
#include <math.h>

int gcd__(int a, int b){
    while(a * b != 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

int main(){
    int t; scanf("%d", &t);
    int test = 1;
    while(t--){
        printf("Case #%d:\n", test);
        int a, b, x, y;
        scanf("%d %d %d %d", &a, &b, &x, &y);
         // a / b:
        int tmp1 = gcd__(a, b);
        a /= tmp1; b /= tmp1;
        // x / y:
        int tmp2 = gcd__(x, y);
        x /= tmp2; y /= tmp2;
        // quy dong
        int tmp0 = b * y / gcd__(b, y);
        a = tmp0 / b * a; x =  tmp0 / y * x;
        b = y = tmp0;
        // in phan so da quy dong
        printf("%d/%d ", a, b);
        printf("%d/%d\n", x, y);
        // tong
        int tu = a * y + b * x;
        int mau = b * y;
        int tmp3 = gcd__(tu, mau);
        tu /= tmp3; mau /= tmp3;
        printf("%d/%d\n", tu, mau);
        // thuong
        int tu1 = a * y;
        int mau1 = b * x;
        int tmp4 = gcd__(tu1, mau1);
        tu1 /= tmp4;
        mau1 /= tmp4;
        printf("%d/%d\n", tu1, mau1);

        ++test;
    }
    return 0;
}