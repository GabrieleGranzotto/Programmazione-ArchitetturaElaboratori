#include<stdio.h>
#include<stdlib.h>

void carica_array(int a[], int dim)
{
    for (int i=0; i<dim; i++)
    {
        printf("%d) ", i+1);
        scanf("%d",&a[i]);
    }
}


int minore_somma(int a[], int dim)
{
    int flag=1;
    int somma=0;
    int i = 2;
    while (i < dim || flag == 0)
    {
        somma=0;
        for (int j=0; j<i; j++)
        {
            somma=somma+a[j];
        }
        if (somma<a[i]) flag=0;
        i++;
    }

    return flag;
}



int main(void)
{
    int dimensione;
    int flag;

    printf("\nQuesto e' un programma che carica \n un vettore di dimensione N e informa \n se nel vettore c'e' un valore che e' minore \n alla somma dei precedenti.\n");
    printf("\nInserisci la dimensione dell'array: ");
    scanf("%d",&dimensione);
    int* array=(int*)malloc(sizeof(int)*dimensione);
    printf("\nAdesso inserire i valori del vettore: \n");
    carica_array(array, dimensione);
    flag = minore_somma(array, dimensione);

    if (flag==1) printf("\nIl Vettore non rispetta le condizioni.\n\n");
    if (flag==0) printf("\nIl Vettore rispetta le condizioni.\n\n");

    return 0;
}