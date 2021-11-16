#include <stdlib.h>
#include <stdio.h>

 int main(){

     char satir[] = "Lorem ipsum dolorem";
     int satir_olchami = sizeof(satir)/sizeof(satir[0]);

     for(int i=satir_olchami; i>=0; i--){
         printf("%c", satir[i]);
     }

    return 0;
 }