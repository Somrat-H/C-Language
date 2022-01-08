#include<stdio.h>

typedef long long unsigned UINT64;
typedef struct Point{
    double x;
    double y;
}point;
int main(){
    point p;

    p.x = 0.089;
    p.y = 0.875;

    UINT64 a = 4;

    printf("%llu\n", a);
    printf("%lf %lf\n", p.x, p.y);

    return 0;
}
