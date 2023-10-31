#include <stdio.h>

int main (){
    double x;
    double y;
    scanf("%lf", &x);
    scanf("%lf", &y);

    double sumd;
    sumd = x+y;
    printf("sum of doubles=%lf\n", sumd);
    double diffd;
    diffd = x-y;
    printf("difference of doubles=%lf\n", diffd);
    double squared;
    squared = x*x;
    printf("square%lf\n", squared);

    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    int sumi;
    sumi = a+b;
    printf("sum of integers=%d\n", sumi);

    int prodi;
    prodi = a*b;
    printf("product of integers=%d\n", prodi);

    char c;
    scanf("%c", &c);
    getchar();
    char d;
    scanf("%c", &d);
    getchar();

    char s;
    s = c+d;
    printf("sum of chars=%d\n", s);

    char e;
    e = c*d;
    printf("product of chars=%d\n", e);

    char j;
    j = c+d;
    printf("sum of chars=%c\n", j);

    char k;
    k = c*d;
    printf("product of chars=%c\n", k);

    return 0;

}