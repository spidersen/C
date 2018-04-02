#include <stdio.h>
#include <stdlib.h>


 promedio()
{
    int precioUno;
    int precioDos;
    int precioTres;
    int promedio;

    printf("Ingrese el primer precio: ");
    scanf("%d", &precioUno);
    printf("Ingrese el segundo precio: ");
    scanf("%d", &precioDos);
    printf("Ingrese el tercer precio: ");
    scanf("%d", &precioTres);

    promedio = (precioUno + precioDos + precioTres)/3;
    printf("El Promedio de los precios es: %d ", promedio);




    return 0;

}


