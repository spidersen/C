#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[50];
    char empleo[50];
    int edad;

}registro;

int main()
{
    registro f1, f2;

    printf("Introduce datos para el Formulario 1: \n");
    printf("Introduce tu nombre: ");
    fgets(f1.nombre, 50, stdin);

    printf("Introduce tu empleo: ");
    fflush(stdin);
    fgets(f1.empleo, 50, stdin);

    printf("Introduce tu edad: ");
    scanf("%d", &f1.edad);


    printf("Introduce datos para el Formulario 2: \n");
    printf("Introduce tu nombre: ");
    fflush(stdin);
    fgets(f2.nombre, 50, stdin);

    printf("Introduce tu empleo: ");
    fflush(stdin);
    fgets(f2.empleo, 50, stdin);

    printf("Introduce tu edad: ");
    scanf("%d", &f2.edad);


    printf("Los datos son: \n");
    printf("El nombre de f1: %s", f1.nombre);
    printf("El nombre de f2: %s", f2.nombre);

    printf("El empleo de f1: %s", f1.empleo);
    printf("El empleo de f2: %s", f2.empleo);

    printf("La edad de f1: %d\n", f1.edad);
    printf("La edad de f2: %d\n", f2.edad);






    return 0;
}
