#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    int contPares;
    float suma;
    suma = 0;

    for(contPares = 2; contPares <= 1000; contPares +=2)//contpares=contpares+2
    {
        suma = suma +contPares;


    }
    printf("El resultado de la suma de numeros pares entre 2 y 1000 es: %f", suma);

    contPares = 2;
    while(contPares <= 1000)
    {
        suma += contPares;
        contPares += 2;
    }
    printf("El resultado de la suma de numeros pares entre 2 y 1000 es: %f", suma);





    return 0;
}
