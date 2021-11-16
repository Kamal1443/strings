#include <stdio.h>

int main(){

    char satir[] = "Lorem ipsum dolorem";
    int satir_olchami = sizeof(satir)/sizeof(satir[0]);

    for(int i=0; i<satir_olchami; i++){
        printf("%c ", satir[i]);
    }
    printf("\n");


    return 0;
}