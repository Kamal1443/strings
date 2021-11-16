#include <stdio.h>

int main(){

    char satir[] = "Lorem ipsum dolorem";
    int satir_olchami = sizeof(satir)/sizeof(satir[0]);
    int N;

    printf("Enter N: ");
    scanf("%d", N);

    for(int i=0; i<satir_olchami; i++){
        int belgi = satir[i];


        printf("%c%c", satir[i], N);
    }
    printf("\n");


    return 0;
}