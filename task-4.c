   #include <stdio.h>


 int main(){

     char c=64;
     int n;
     printf("Enter n: ");
     scanf("%d", &n);

     for(int i=0; i<=n; i++){
         c++;
         printf("%d - %c\n", i, c);
         }

    return 0;
 }