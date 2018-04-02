#include <stdio.h>
#include <stdlib.h>

int primo(int a);

int main()
{
    printf("Hello world!\n");

    int numero1, numero2, prim1, prim2;

    printf("Ingrese el primer numero: ");
    scanf("%d: ", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d: ", &numero2);

    prim1 = primo(numero1);
    prim2 = primo(numero2);

    if(prim1 == 0)
    {
        printf("El numero %d es primo", numero1);
    }
    else
    {
        printf("El numero %d NO es primo", numero1);
    }

    if(prim2 == 0)
    {
        printf("El numero %d es primo", numero2);
    }
    else
    {
        printf("El numero %d NO es primo", numero2);
    }




    return 0;
}

int primo(int a)
{
    int cont1, cont2, aux;

    cont2 = 0;

    for(cont1 = 2, cont1 <= a && cont2 == 0, cont1++);
    {
        aux = a %d;
        if (aux == 0)
        {
            cont2 = 1;
        }

    }
    return cont2;
}
