#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if(numero == 0)
    {
        printf("Ingrese un numero distinto de 0: ");

    }
    else if(numero %2 == 0)
    {
        printf("El numero ingresado es par ");
    }
        else
        {
            printf("El numero ingresado es impar");
        }





    return 0;
}
