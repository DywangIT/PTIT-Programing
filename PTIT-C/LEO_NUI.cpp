#include <stdio.h>

int min(int a, int b){
    return a > b ? b : a;
}

int main(){
    int n, up_time, down_time;
    scanf("%d", &n);
    int up_time_min = 1e9, down_time_min = 1e9, total_up_time = 0, total_down_time = 0;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &up_time, &down_time);
        up_time_min = min(up_time_min, up_time);
        down_time_min = min(down_time_min, down_time);
        total_up_time += up_time;
        total_down_time += down_time;
    }

    // thuật toán tìm thời gian leo núi ít nhất

    printf("%d", total_up_time > total_down_time ? total_up_time + down_time_min : total_down_time + up_time_min);
    return 0;
}