#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c1[5];
    char c2[5];

    printf("Introduce una palabra: ");
    fgets(c1, 5, stdin);

    printf("Introduce otra palabra: ");
    fflush(stdin);
    fgets(c2, 5, stdin);


    if (strcmp(c1, c2) == 0)
    {
        printf("Las palabras son iguales. ");
    }
    else
    {
        printf("Las palabras NO son iguales.\n");
    }




    return 0;
}
