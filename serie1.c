#include<stdio.h>

float SerieIterativa(int n)
{
    float a=0.5;
    for(int i=2; i<=n; i++)
    {
        a=(a+1.0)/2.0;
    }
    return a;
}

float SerieRicorsiva(int n)
{
    if (n==1) return 0.5;
    else return (SerieRicorsiva(n-1)+1.0)/2.0;
}

int main(void)
{
    int numeri;
    printf("Inserisci il numero di cicli della Somma: ");
    scanf("%d",&numeri);
    printf("\n");
    float //somma=SerieIterativa(numeri);
    somma=SerieRicorsiva(numeri);
    printf("Somma: %f\n",somma);

    return 0;
}