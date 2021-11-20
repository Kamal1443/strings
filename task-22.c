#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main(){

    int i, sum=0;
    char str[MAX_SIZE];

    printf("Enter string: ");
    gets(str);
    int length = strlen(str);

    printf("\n");

    for(i=0; str[i] != '\0'; i++){
        if ((str[i] >= '0') && (str[i] <= '9'))
        {
            sum += (str[i] - '0');
        }
    }

    printf("Sum of all digits in string: %d", sum);


    return 0;
}