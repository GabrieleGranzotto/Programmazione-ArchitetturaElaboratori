#include<stdio.h>
#include<stdlib.h>

void inserimento(int a[], int dim)
{
    printf("Inserire il vettore di %d valori:\n",dim);
    for(int i=0; i<dim; i++)
    {
        printf("%d - ", i+1);
        scanf("%d",&a[i]);
    }
}

void stampa(int a[], int dim)
{
    printf("\n\nQuesto e' il vettore: \n");
    for (int i = 0; i < dim; i++)
    {
        printf("%d - %d\n",i+1,a[i]);
    }
    printf("\n\n");
}

int* somma(int a[], int b[], int dim)
{
    int *c;
    c = (int*)malloc(sizeof(int) * dim);
    for (int i = 0; i < dim; i++)
    {
        c[i] = a[i]+b[i];
    }
    return c;
}

int main(void)
{
    int array1[5];
    int array2[5];
    int* arraysomma;
    int dimensione = 5;

    inserimento(array1, dimensione);
    inserimento(array2, dimensione);

    arraysomma = somma(array1, array2, dimensione);

    stampa(arraysomma, dimensione);

    return 0;
}