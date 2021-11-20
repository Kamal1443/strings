#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main(){

    int i;
    char str[MAX_SIZE];

    printf("Enter string: ");
    gets(str);
    int length = strlen(str);

    printf("\n");

    for(i=0; i<length; i++){
        printf("%c", str[i]);
    }


    return 0;
}