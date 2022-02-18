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

void stampa(int a[], int dim)
{
    printf("\n\nQuesto e' il vettore invertito: \n");
    for (int i = 0; i < dim; i++)
    {
        printf("%d - %d\n",i+1,a[i]);
    }
    printf("\n\n\n");
}

void bouncingsort(int a[], int dim)
{
    int i=0;
    int flag=0;
    int x=1;
    int swap=1;
    while (flag == 0)
    {
        flag=1;
        x=(x+1)%2;
        for (int i = x; i <= dim-2; i = i + 2)
        {
            if (a[i] > a[i + 1])
            {
                swap=a[i];
                a[i]=a[i+1];
                a[i + 1] = swap;
                flag = 0;
            }
        }
    }
}



int main(void)
{
    int array[4];
    int dimensione=4;

    inserimento(array, dimensione);
    bouncingsort(array, dimensione);
    stampa(array, dimensione);
    

    return 0;
}