#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (){
    int n;
    char c;

    printf("Enter n: ");
    scanf("%d", &n);

    if(32<n && n<126){
        printf("%c\n",n);
    } else{
        printf("Enter number between 32 and 126");
    };


    return 0;
}