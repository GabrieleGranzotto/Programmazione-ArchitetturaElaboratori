#include<stdio.h>
#include<stdlib.h>

int* caricamento(int n)
{
    int* a=(int)malloc(sizeof(int)*n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    return a;
}

int dimensione(int* a, int n)
{
    int counter=0;
    for(int i=0; i<n; i++)
    {
        for (int j=i; j<n; i++)
        {
            if (a[i]!=a[j]) counter++;
        }
    }
    return counter;
}

    int *senzaripetizioni(int *a, int n)
    {
        int counter = dimensione(a, n);
        int *b = (int)malloc(sizeof(int) * counter);
        b[0] = a[0];
        int k = 0;
        for (int i = 1; i < n; i++)
        {
            int flag = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                    flag = 0;
            }
            if (flag == 1)
            {
                b[k] = a[i];
                k++;
            }
        }
        *m = &n;
        return b;
}

int* frequenza(int* a, int* b, int n)
{
    int dim = dimensione(a, n);
    int *c = (int)malloc(sizeof(int) * dim);
    for (int i = 0; i < n; i++)
    {
        c[i] = 0;
    }
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j]) 
            {
                c[i]++;
            }
        }
    }
    return c;
}