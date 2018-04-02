#include <stdio.h>
#include <stdlib.h>
//Si la hora es correcta que me devuelva la misma aumentada 1''
int main()
{
    printf("Hello world!\n");

    int hora;
    int minutos;
    int segundos;

    printf("Ingrese la hora: ");
    scanf("%d", &hora);
    printf("Ingrese los minutos: ");
    scanf("%d", &minutos);
    printf("Ingrese los segundos: ");
    scanf("%d", &segundos);

    if(hora <= 23 && minutos <= 59 && segundos <= 59)
    {
        segundos += 1;  //segundos=segundos+1


        if(segundos == 60)
        {
            minutos += 1;
            segundos = 0;
        }
        if(minutos == 60)
        {
            hora += 1;
            minutos = 0;
        }
        if(hora == 24)
        {
            hora = 0;
        }

        printf("La hora es: %d :%d :%d", hora, minutos, segundos);
    }
        else
        {
            printf("La hora no es correcta ");
        }










    return 0;
}
