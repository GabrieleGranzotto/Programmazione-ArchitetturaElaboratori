#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)
{
    if (n==0 || n==1) return 1;
    if (n>1) return fibonacci(n-1)+fibonacci(n-2);
}

int successione_ricorsiva(int n)
{
    if (n==0 || n==1) return n;
    if (n>1) return (fibonacci(n) + successione_ricorsiva(n-1))/2;
}

int successione_iterativa(int n)
{
    if (n==0) return n;
    else
    {
        float valore=n;
        for (int i=2; i<=n; i++)
        {
            valore=(fibonacci(i)+valore)/2;
        }
        return valore;
    }
}

int array_caricato(int a[], int dim)
{
    int flag=0;
    for (int i=0; i<dim; i++)
    {
        a[i] = successione_ricorsiva(i);
        if (a[i-1]>=a[i]) flag=1;
    }
    return flag;
}

int main(void)
{
    int dim;
    scanf("%d",&dim);
    float* a = (float*) malloc(sizeof(float)*dim);
    int f=array_caricato(a, dim);
    if (f==0) printf("l'array e' crescente");
    if (f==1) printf("l'array non e' crescente");
    printf("\n\n\n");

    return 0;
}
    

