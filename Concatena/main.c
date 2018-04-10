#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char nombre[50] = "cristian";
    char apellido[50] = "petersen";
    char apellidoNombre[101];
    int i;
    int len;
    len = strlen(apellidoNombre);
    /*printf("Ingrese nombre:");
    gets(nombre);
    printf("Ingrese apellido:");
    gets(apellido);*/

    strcpy(apellidoNombre, apellido);
    strcat(apellidoNombre,  ", ");
    strcat(apellidoNombre, nombre);

    strlwr(apellidoNombre);


    apellidoNombre[0] = toupper(apellidoNombre[0]);
    len = strlen(apellidoNombre);
    for(i = 1; i < len; i++)
    {
        if(apellidoNombre[i]==' ')
        {
            apellidoNombre[i+1] = toupper(apellidoNombre[i+1]);
        }
    }


    puts(apellidoNombre);




    return 0;
}
