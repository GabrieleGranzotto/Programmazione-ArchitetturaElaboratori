#include<stdio.h>

void triangolare(int a[], int n)  //1+2+3+4+5+6+7+8+...
{
    a[0] = 1;
    for (int i = 1; i < n; i++)
    {
        a[i] = i + 1 + a[i - 1];
    }
}

void stampa(int a[], int dim)
{
    printf("\n\nQuesto e' il vettore invertito: \n");
    for (int i = 0; i < dim; i++)
    {
        printf("%d -    %d\n",i+1,a[i]);
    }
    printf("\n\n");
}

int main(void)
{
    int array[10];
    int dim=10;

    triangolare(array, dim);
    stampa(array, dim);

    return 0;
}