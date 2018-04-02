#include <stdio.h>
#include <stdlib.h>

main()
{

int numero1, numero2, numero3;

printf("Ingrese el primer numero: ");
scanf("%d", &numero1);
printf("Ingrese el segundo numero: ");
scanf("%d", &numero2);
printf("Ingrese el tercer numero: ");
scanf("%d", &numero3);

if(numero1 > numero2 && numero1 > numero3)
{
    printf("El mayor es: %d", numero1);
}
    else if(numero2 > numero1 && numero2 > numero3)
    {
        printf("El mayor es: %d", numero2);
    }
        else
        {
            printf("El mayor es: %d", numero3);
        }






return 0;

}
