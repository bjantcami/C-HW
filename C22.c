#include <stdio.h>

int main (){
    
   char c;
   scanf("%c", &c); 
   getchar();

   printf("character=%c\n", c);
   printf("decimal=%d\n", c);
   printf("octal=%o\n", c);
   printf("hexadecimal=%x\n", c);

   return 0;

}