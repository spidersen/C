#include <stdio.h>
#include <stdlib.h>


suma()
{
    int precioUno;
    int precioDos;
    int precioTres;
    int suma;

    printf("Ingrese el primer precio: ");
    scanf("%d", &precioUno);
    printf("Ingrese el segundo precio: ");
    scanf("%d", &precioDos);
    printf("Ingrese el tercer precio: ");
    scanf("%d", &precioTres);

    suma = precioUno + precioDos + precioTres;
    printf("La suma de los precios es: %d ", suma);




    return 0;

}

