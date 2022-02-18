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

int valoridiversi(int a[], int dim)
{
    int flag=1;
    int i=0;
    int j;
    while (i <= dim && flag == 1)
    {
        j=i+1;
        while(j<dim && flag == 1)
        {
            if (a[i]==a[j]) flag=0;
            j++;
        }
        i++; 
    }
    return flag;
}

int main(void)
{
    int array[5];
    int dimensione=5;
    inserimento(array, dimensione);
    printf("\n%d\n\n", valoridiversi(array, dimensione));

    return 0;
}