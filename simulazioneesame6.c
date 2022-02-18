#include<stdio.h>
#include<stdlib.h>

void letturaarray(int* array)
{
    int dim=5;
    for (int i=0; i<dim; i++)
    {
        scanf("%d",&array[i]);
    }
}

int* fusione(int* a, int* b)
{
    int dim=10;
    int* c=(int*)malloc(sizeof(int)*dim);
    int i=0;
    int j=0;
    int k=0;
    while(j<5 || k<5)
    {
        if(a[j]>b[k]) 
        {
            c[i]=b[k];
            k++;
        }
        if(a[j]<b[k])
        {
            c[i]=a[j];
            j++;
        }
        i++;
    }
    if (j>5)
    {
        for (int w=i+1; w<dim; w++)
        {
            c[w]=a[j];
            j++;
        }
    }
    if (k>5)
    {
        for (int w=i+1; w<dim; w++)
        {
            c[w]=b[k];
            k++;
        }
    }
    return c;
}

int main(void)
{


    return 0;
}