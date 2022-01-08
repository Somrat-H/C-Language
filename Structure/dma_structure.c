#include<stdio.h>
#include<stdlib.h>

typedef struct Point{
    double x, y;
}point;

point* getMidlle(point* a, point* b);

int main(){
    point p1;
        p1.x = 2.5;
        p1.y = 3;

    point p2;
        p2.x = 1;
        p2.y = 2;


    point* r = getMidlle(&p1, &p2);

    printf("%.3lf %.3lf\n", r->x, r->y);
    free(r);

    return 0;
}
point* getMidlle(point* a, point* b){

    point* m = malloc(sizeof(point));

    m->x = (a->x + b->x) / 2;
    m->y = (b->x + b->y) / 2;

    return m;
}
