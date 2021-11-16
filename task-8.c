#include <stdlib.h>
#include <stdio.h>

 int main(){
     char belgi;
     int N;
     
     printf("Enter your character: ");
     scanf("%c", belgi);

     printf("Enter N: ");
     scanf("%d", N);

     for (int i=0; i>=N; i++){
         printf("%c", belgi);
     }

    return 0;
 }