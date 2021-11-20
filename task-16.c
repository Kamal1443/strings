#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main(){

    int i;
    char satr[MAX_SIZE];

    printf("Satrni kiriting: ");
    gets(satr);

    for(i=0; satr[i]!='\0'; i++){
        if (satr[i]>='A'&& satr[i]<='Z'){
            satr[i] = satr[i] + 32;
        }
    }

    printf("Natija: %s", satr);

    return 0;
}