#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
}Point;


int main(){
    Point *point1;
    point1 = (Point *)malloc(sizeof(Point));

    point1->x=3.0;
    point1->y=9.0;
    printf("x : %0.2f \ty : %.02f",point1->x,point1->y);
    free(point1);
}