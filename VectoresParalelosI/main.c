#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

int buscarLibre(int[], int);
void mostarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
void cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]= {};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int i;

    do
    {
        printf("1. Altas\n2. Mostrar\n9. Salir\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarAlumno(legajo, nombre,  nota1, nota2, promedio, TAM);
            break;

        case 2:
             mostarAlumnos(legajo, nombre,  nota1, nota2, promedio, TAM);




        }
    }
    while(opcion!=9);

    return 0;
}

int buscarLibre(int legajos[], int tam)
{
    int index = -1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(legajos[i] == 0)
        {
            index = i;
            break;
        }
    }

    return index;
}

float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostarAlumnos(int legajo[], char nombre[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<TAM; i++)
            {
                if(legajo[i]!=0)
                printf("%d\n %s\n %d\n %d\n %f\n", legajo[i], nombre[i], nota1[i], nota2[i], promedio[i]);
            }
}

void cargarAlumno(int legajo[], char nombre [][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index;
    index = buscarLibre(legajo, TAM);
            if(index==-1)
            {
                printf("No hay lugar disponible");
            }
            else
            {
                printf("Ingrese legajo: ");
                scanf("%d", &legajo[index]);

                printf("Ingrese nombre: ");
                fflush(stdin);
                gets(nombre[index]);

                printf("Ingrese Nota 1: ");
                scanf("%d", &nota1[index]);

                printf("Ingrese Nota 2: ");
                scanf("%d", &nota2[index]);

                promedio[index] = calcularPromedio(nota1[index], nota2[index]);

            }

}
