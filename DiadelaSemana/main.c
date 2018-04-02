#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int numero;

    printf("Ingrese un numero del 1 al 4: ");
    scanf("%d", &numero);

    /*if(numero == 1)
    {
        printf("Hoy es Lunes ");
    }
        else if(numero == 2)
        {
            printf("Hoy es Martes ");
        }
            else if(numero == 3)
            {
                printf("Hoy es Miercoles");
            }
                else if(numero == 4)
                {
                    printf("Hoy es jueves ");
                }

                    else
                    {
                        printf("El numero es incorrecto: ");
                    }*/

    switch(numero)

    {
        case 1: printf("Lunes ");
        break;
        case 2: printf("Martes ");
        break;
        case 3: printf("Miercoles ");
        break;
        case 4: printf("Jueves ");
        break;
        default: printf("El numero es incorrecto! ");

    }





    return 0;
}
