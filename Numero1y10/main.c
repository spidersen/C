#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if(numero >= 1 && numero <= 10)
    {
        printf("El numero %d esta entre 1 y 10: ", numero);

    }
        else
        {
            printf("El numero %d no esta entre 1 y 10: ", numero);
        }



    return 0;
}
