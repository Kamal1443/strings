#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Russian");

    char ism[100];

    printf("ismingizni kiriting : ");
    scanf("%s", ism);

    int ism_olchami = strlen(ism)-1;
    printf("ismingiz %d-ta harifdan iborat ", ism_olchami);
    printf("\n");
    printf("%s\n", ism);
    
    return  0;
}