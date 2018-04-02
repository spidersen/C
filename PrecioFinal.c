#include <stdlib.h>
#include <stdio.h>

numeromaximo()
{
    int precioUno;
    int precioDos;
    int precioTres;
    float suma;
    float precioFinal;

    printf("Ingrese el primer precio: ");
    scanf("%d", &precioUno);
    printf("Ingrese el segundo precio: ");
    scanf("%d", &precioDos);
    printf("Ingrese el tercer precio: ");
    scanf("%d", &precioTres);

    suma = precioUno + precioDos + precioTres;
    precioFinal = suma * 1.21;
    printf("El precio final es: %f ", precioFinal);




    return 0;

}
