#include <stdio.h>

int main (){
    
    int n;
    scanf("%d", &n);
    
    while (n<=0){
        printf("The value is invalid. Enter again. \n");
        scanf("%d", &n);
    }

    int i=1;
    int hours;

    while (i<=n){
        printf("%d days = %d hours\n", i, hours);
        i=i+1;
        hours = i*24;
    }
    return 0;    

}