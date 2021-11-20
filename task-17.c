#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#define MAX_SIZE 100

int main(){
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int i;
    char satr[MAX_SIZE];

    printf("Satrni kiriting: ");
    scanf("%s", &satr);

    for(i=0; satr[i]!='\0'; i++){
        if (satr[i]>='a'&& satr[i]<='z'){
            satr[i] = satr[i] - 32;
        } else if ( satr[i]>=160 && satr[i]<=255) {
            satr[i] = satr[i] - 32;
        }
    }

    printf("Natija: %s", satr);

    return 0;
}