#include <stdio.h>
#include <stdlib.h>
//Tablas de multiplicar del 1 al 9.


int main()
{
    printf("Hello world!\n");

    int cont1;
    int cont2;

    for(cont1 = 1; cont1 <= 9; cont1 ++)
    {
        for(cont2 = 1; cont2 <= 10; cont2 ++)
        {
            printf("%d x %d  = %d \n", cont1, cont2, cont1 * cont2);
        }
    }



    return 0;
}
