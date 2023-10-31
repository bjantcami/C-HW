#include <stdio.h>

int main (){

    int x = 17;
    int y = 4;
    printf("x=%d\n", x);
    printf("y=%d\n", y);

    int sum;
    sum = x+y;
    printf("sum=%d\n", sum);

    int prod;
    prod = x*y;
    printf("product=%d\n", prod);

    int diff;
    diff = x-y;
    printf("difference=%d\n", diff);

    float division;
    division = x/y;
    printf("division=%lf\n", division);

    int rd;
    rd = x%y;
    printf("remainder of division=%d\n", rd);

    return 0;


}