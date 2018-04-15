#include <stdio.h>
#include <stdlib.h>

void ordenar (int a[]);
void imprimir (int x[]);

int main()
{
    int v[10] = {1,3,5,6,8,2,0,4,7,9};
    ordenar (v);
    imprimir (v);

    return 0;
}

void ordenar (int a[])
{
    int i;
    int j;
    int aux;

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }

        }
    }

}

void imprimir(int x[])
{
    int i;

    for(i = 0; i < 10; i++)
    {
    printf("%d ", x[i]);
    }

}
