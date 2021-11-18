#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    int N ;
    char A;
    printf("N= ");
    scanf("%d", &N);
    
    printf("Enter your character: ");
    scanf("%c", &A);
    scanf("%c", &A);    
    
    printf("Result: ");
    
    for(int i=0; i<N; i++){
        
        printf("%c", A);
    }
    printf("\n\n\n");

    return 0;
}