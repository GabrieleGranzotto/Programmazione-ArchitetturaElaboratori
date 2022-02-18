#include<stdio.h>

void inserimento(int a[], int dim)
{
    printf("Inserire il vettore di %d valori:\n",dim);
    for(int i=0; i<dim; i++)
    {
        printf("%d - ", i+1);
        scanf("%d",&a[i]);
    }
}

void invertire(int a[], int dim)
{
    int swap;
    for (int i=0; i<dim/2; i++)
    {
    swap = a[i];
    a[i] = a[dim - i-1];
    a[dim - i-1] = swap;
    }
}

void stampa(int a[], int dim)
{
    printf("\n\nQuesto e' il vettore invertito: \n");
    for (int i = 0; i < dim; i++)
    {
        printf("%d - %d\n",i+1,a[i]);
    }
    printf("\n\n\n");
}

int main(void)
{
    int array[11];
    int dimensione=11;

    inserimento(array, dimensione);
    invertire(array, dimensione);
    stampa(array,dimensione);

    return 0;
}