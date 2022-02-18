//simulazione di esame per Programmazione1
//esercizio n.2
#include<stdio.h>
#include<stdlib.h>

int* definizione(int dim)
{
    int* a;
    a=(int*)malloc(sizeof(int)*dim);
    for(int i=0; i<dim; i++)
    {
        scanf("%d",&a[i]);
    }
    return a;
}

int quesito(int* a, int dim)
{
    int risposta=0;
    for (int i = 0; i < dim; i++)
    {
        int valore=0;
        for (int j=0; j<i; j++)
        {
            if (a[j]<a[i]) valore=valore+j;
        }
        if (a[i]==valore) risposta++;
    }
    return risposta;
}

int main(void)
{
    int *array;
    int dimensione;
    int output;
    scanf("%d", &dimensione);
    array = definizione(dimensione);
    output = quesito(array, dimensione);
    printf("%d", output);

    return 0;
}