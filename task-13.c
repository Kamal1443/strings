#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

int main(){

    int raqamlar, i;  
    char satr[MAX_SIZE];
    raqamlar = i = 0;

    printf("Satrni kiriting: ");
    gets(satr);

    while(satr[i]!='\0')
    {
        
        if(satr[i]>='0' && satr[i]<='9')
        {
            raqamlar++;
        }

        i++;

    };

    printf("Raqamlar soni %dta", raqamlar);

    return 0;
}