#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vector[13];

    printf("Introduce una frase: ");
    fgets(vector, 13, stdin);

    printf("%s\n", vector);




    return 0;
}
