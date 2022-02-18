#include<stdio.h>

int AnalisiVettore(int a[], int dim)
{
    int boolean = 0;
    for (int i = 0; i < dim - 1; i++)
    {
        if (a[i]>=a[i+1]) boolean=1;
    }
    return boolean;
}


void Riempimento(int a[], int dim)
{
    printf("\nInserire i valori del vettore: \n");
    for (int i=0; i<dim; i++)
    {
        printf("Valore numero %d= ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
}


int main(void)
{
    int array[10];
    int dimensione=10;
    printf("Questo e' un programma che inserisce un numero di valori nel vettore a dimensione 10\n e calcola se il vettore e' crescente.");
    Riempimento(array, dimensione);
    if (AnalisiVettore(array, dimensione)==0) printf("\nVettore Crescente!\n\n\n");
    else printf("\nVettore non Crescente!\n\n\n");

    return 0;
}