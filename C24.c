#include <stdio.h>

int main (){
    float a;
    float b;
    float h;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    float square;
    square = a*a;

    float rectangle;
    rectangle=a*b;

    float triangle;
    triangle= (a*h)/2;

    float trapezoid;
    trapezoid= ((a+b)*h)/2;

    printf("square area=%f\n", square);
    printf("rectangle area=%f\n", rectangle);
    printf("triangle area=%f\n", triangle);
    printf("trapezoid area=%f\n", trapezoid);

    return 0;

}