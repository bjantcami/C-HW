#include <stdio.h>

int main (){
    char c;
    c = 'F';
    char result = c + 3;
    int x = c + 3;
    printf("The third character after F is %c\n", result);
    printf("The corresponding ASCII code is %d.\n", x);
    
    return 0;
}