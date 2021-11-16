#include <stdlib.h>
#include <stdio.h>

 int main(){

     char satir[] = "Lorem ipsum dolorem";
     int satir_olchami = sizeof(satir)/sizeof(satir[0]);

     printf("First character is %c\nLast is %c", satir[0], satir_olchami);

    return 0;
 }