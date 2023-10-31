#include <stdio.h>

int main (){

    char a;
    scanf("%c", &a);

    if (a>=48 && a<=57){
        printf("%c is a digit\n", a);
    }
    else if((a>=41 && a<=90)||(a>=97 && a<=122)){
        printf("%c is a letter\n", a);
    }
    else{
        printf("%c is some other symbol\n", a);
    }

    return 0;
    
}