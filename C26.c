#include <stdio.h>

int main (){

    double x;
    double y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    double *ptr_one;
    double *ptr_two;
    double *ptr_three;

    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("ptr_one address %p and ptr_two address %p\n", ptr_one, ptr_two);
    printf("ptr_three address %p\n", ptr_three);

    return 0;

}