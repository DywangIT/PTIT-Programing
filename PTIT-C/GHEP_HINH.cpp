#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if(x1 < y1){
        int tmp = x1;
        x1 = y1;
        y1 = tmp;
    }
    if(x2 < y2){
        int tmp = x2;
        x2 = y2;
        y2 = tmp;
    }
    if(x3 < y3){
        int tmp = x3;
        x3 = y3;
        y3 = tmp;
    }
    if(x1 == x2 && x1 == x3 && y1 + y2 + y3 == x1) printf("YES");
    else if(x1 == x2 + x3 && y2 == y3 && y1 + y2 == x1 || x1 == x2 + y3 && y2 == x3 && y1 + y2 == x1 || x1 == y2 + y3 && x2 == x3 && y1 + x2 == x1 || x1 == y2 + x3 && x2 == y3 && y1 + x2 == x1 || /**/ x2 == x1 + x3 && y1 == y3 && y2 + y1 == x2 || x2 == x1 + y3 && y1 == x3 && y2 + y1 == x2 || x2 == y1 + y3 && x1 == x3 && y2 + x1 == x2 || x2 == y1 + x3 && x1 == y3 && y2 + x1 == x2 || /**/ x3 == x2 + x1 && y2 == y1 && y3 + y2 == x3 || x3 == x2 + y1 && y2 == x1 && y3 + y2 == x3 || x3 == y2 + y1 && x2 == x1 && y3 + x2 == x3 || x3 == y2 + x1 && x2 == y1 && y3 + x2 == x3) printf("YES");
    else printf("0");
    return 0;
}
