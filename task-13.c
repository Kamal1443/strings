#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int counter=0;  
    char satr[100];

    printf("Satrni kiriting: ");
    fgets(satr, 100, stdin);

    int satr_olchami = strlen(satr), N;
    printf("Satr o'lchami: %d\n", satr);

    for(int i=0; i<satr_olchami; i++){
        printf("%d - %c\n", i, satr[i]);
        counter++;
    }

        printf("Raqamlar soni : %d\n", counter);


    return 0;
}