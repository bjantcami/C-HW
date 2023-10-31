#include <stdio.h>

int main (){
    int weeks;
    int days;
    int hours;

    scanf("%d", &weeks);
    scanf("%d", &days);
    scanf("%d", &hours);

    int h;
    h = weeks * 168 + days * 24 + hours;
    printf("Total number of hours: %d\n", h);

    return 0;
}