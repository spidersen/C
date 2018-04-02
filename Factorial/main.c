#include <stdio.h>
#include <stdlib.h>

int factorial(int a);

int main()
{
    printf("Hello world!\n");


    int numero1, numero2, fact1, fact2;

    printf("Ingrese el primer numero para encontrar su factorial: ");
    scanf("%d: ", &numero1);
    printf("Ingrese el segundo numero para encontrar su factorial: ");
    scanf("%d: ", &numero2);

    fact1 = factorial(numero1);
    fact2 = factorial(numero2);

    printf("El resultado del factorial del primer numero es: %d\n", fact1);
    printf("El resultado del factorial del segundo numero es: %d", fact2);

    /*int numero;
    int cont;
    int factorial;

    factorial = 1;

    printf("Ingrese un numero para encontrar su factorial: ");
    scanf("%d: ", &numero);

    for(cont = 1; cont <= numero; cont++)
    {
        factorial = factorial * cont;
    }

    printf("El factorial de %d es: %d ", numero, factorial);*/



    return 0;
}

int factorial(int a)
{
    int aux, cont;

    aux = 1;

    for(cont = 1; cont <= a; cont++)
    {
        aux = aux * cont;
    }


    return aux;
}
