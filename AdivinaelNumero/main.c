#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    numero = 3;
    int numeroElegido;

    printf("Ingrese un numero entre el 1 y el 10: ");
    scanf("%d", &numeroElegido);

    if(numeroElegido == numero)
    {
        printf("Adivinaste el numero");
    }
        else
        {
            printf("Otra oportunidad, intentalo de nuevo ");
        }

    return 0;
}
