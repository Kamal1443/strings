#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#define MAX_SIZE 100

int main(){
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int Kichik_harflar, i;
    char satr[MAX_SIZE];
    Kichik_harflar = i = 0;

    printf("Satrni kiriting: ");
    gets(satr);

    while(satr[i]!='\0')
    {
        
        if(satr[i]>=97 && satr[i]<=122)
        {
            Kichik_harflar++;
        } else if (satr[i]>=224 && satr[i]<=255){
            Kichik_harflar++;
        }

        i++;

    };

    printf("Kichik harflar soni %dta", Kichik_harflar);

    return 0;
}