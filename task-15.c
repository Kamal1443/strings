#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

int main(){

    int Kichik_harflar, i;
    char satr[MAX_SIZE];
    Kichik_harflar = i = 0;

    printf("Satrni kiriting: ");
    gets(satr);

    while(satr[i]!='\0')
    {
        
        if(satr[i]>='a' && satr[i]<='z')
        {
            Kichik_harflar++;
        }

        i++;

    };

    printf("Kichik harflar soni %dta", Kichik_harflar);

    return 0;
}