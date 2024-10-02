#include <stdio.h>



typedef struct{
    float width;
    float height;
}Rectangle;

float area(Rectangle rectangle1);



int main(){
    Rectangle rectangle1 = {4.0,4.0};
    printf("the area of a rectangle with a width of %.01f and a height of %0.1f is : %0.2f",rectangle1.width,rectangle1.height,area(rectangle1));
}


float area(Rectangle rectangle1){
    return rectangle1.width*rectangle1.height;
}