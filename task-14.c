#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

int main(){

    int Katta_harflar, i;
    char satr[MAX_SIZE];
    Katta_harflar = i = 0;

    printf("Satrni kiriting: ");
    gets(satr);

    while(satr[i]!='\0')
    {
        
        if(satr[i]>='A' && satr[i]<='Z')
        {
            Katta_harflar++;
        }

        i++;

    };

    printf("Katta harflar soni %dta", Katta_harflar);

    return 0;
}