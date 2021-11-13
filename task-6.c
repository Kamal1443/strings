#include <stdlib.h>
#include <stdio.h>

 int main(){

     char c;
     int n;
     printf("Enter your character: ");
     scanf("%c", &n);

     if (n>=48 && n<=57){
         printf("Digit");
     } else if (n>=65 && n<=122){
         printf("Lotin");
     } else {
         printf ("0");
     }

    return 0;
 }