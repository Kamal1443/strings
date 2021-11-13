#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (){
    int n;
    char c;

    printf("Enter n: ");
    scanf("%d", &n);

    printf ("%c ", n-1);
    printf ("%c ", n);
    printf ("%c", n+1);


    return 0;
}