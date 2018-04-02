#include <stdio.h>
#include <stdlib.h>
//me entrega los numero que se encuentran esntre dos elegidos.
int main()
{
    printf("Hello world!\n");

    int numero1;
    int numero2;
    int cont;

    printf("Introduce un numero: ");
    scanf("%d", &numero1);
    //printf("Introduce otro numero mayor al anterior: ");
    //scanf("%d", &numero2);

    do
    {
        printf("Introduce otro numero mayor al anterior: ");
        scanf("%d", &numero2);
    }
    while(numero2 < numero1);



    //Bucle For
    for(cont = numero1 + 1 ; cont < numero2 ; cont ++) //(inicialo cont;condicion, incremento cont)
    {
        printf("%d, ", cont);
    }
printf("\n");
    //Bucle While
    cont = numero1 + 1;
    while(cont < numero2)
    {
        printf("%d, ", cont);
        cont ++;
    }









    return 0;
}
