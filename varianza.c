#include<stdio.h>
#include<math.h>

float var(int a[], int dim)
{
    int somma=0;
    for (int i=0; i<dim; i++)
    {
        scanf("%d", &a[i]);
        somma = somma + a[i];
    }
    float media=(float)somma/(float)dim;
    float varianza=0;
    for (int i=0; i<dim; i++)
    {
        varianza = varianza + (a[i]-media);
    }
    varianza = varianza/dim;
    return varianza;
}

