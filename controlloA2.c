#include<stdio.h>
#include<stdlib.h>

int min( int* a, int n, int inizio)
{
    int i = 0;
    for (int j=inizio+1; j<n; j++)
    {
        if (a[i] >= a[j]) i=j;
    }
    return i;
}

int* ordine_ricorsivo(int* a, int n, int i)
{

    if (i==n) return a;
    if (i<n)
    {
        if (min(a, n, i)!=i)
        {
            int tmp = a[i];
            a[i] = a[min(a,n, i)];
            a[min(a,n, i)] = a[i];
        }
        return ordine_ricorsivo(a, n, i+1);
    }
}


int main(void)
{
    int dim = 5;
    int a[5] = {8,2,3,4,5};

    int* val = ordine_ricorsivo(a,dim,0);
    
    for (int i=0; i<dim; i++)
    {
        printf("\n%d\n", val[i]);
    }

    return 0;
}
