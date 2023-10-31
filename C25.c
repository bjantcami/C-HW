#include <stdio.h>

int main (){

    int a;
    scanf("%d", &a);
    printf("%d\n", a);

    int *ptr_a;
    ptr_a = &a;
    a = *ptr_a + 5;
    printf("The modified value %d\n", *ptr_a);
    printf("The address of the variable %p\n", ptr_a);

    return 0;
}