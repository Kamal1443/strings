#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char satr[100];

    printf("Satrni kiriting: ");
    fgets(satr, 100, stdin);

    int satr_olchami = strlen(satr), N;

    printf("Satr o'lchami: %d\nN=", satr_olchami);
    scanf("%d", &N);

    for(int i=0; i<satr_olchami-1; i++){
        printf("%c", satr[i]);
        for(int j=0; j<N; j++){
            printf("*");
        }
    }

    printf("\n");


    return 0;
}