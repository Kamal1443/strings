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

    for(i=0; i<length; i++){
        if (str[i]='+'){
            str[i-1] + str[i+1] ;
        } else if (str[i]='-'){
            str[i-1] - str[i+1] ;
        } else{
            i++;
        }
    }

    printf("Result: %d", str);

    return 0;
}