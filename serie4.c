#include<stdio.h>
#include<math.h>

float SerieIterativa(int n)
{
    float a=0.0;
    for (int i=0; i<=n; i++)
    {
        a=a+1.0/pow(2*(float)i + 1.0,2.0);
    }
    return a;
}

float SerieRicorsiva(int n)
{
    if (n==0) return 1;
    else return (float)1/pow(2*n + 1.0,2.0) + SerieRicorsiva(n-1);
}

int main(void)
{
    int cicli;
    printf("Inserire il numero dei cicli del programma: ");
    scanf("%d",&cicli);
    float //somma = SerieIterativa(cicli);
    somma = SerieRicorsiva(cicli);
    printf("%f - %f", somma, pow(3.1415, 2.0) / 8.0);
    if (abs(somma - pow(3.1415, 2.0) / 8.0) <= 0.0001)
        printf("\n\nLa serie converge correttamente.\n\n\n");
    else printf("\n\nLa serie non converge correttamente.\n\n\n");

    return 0;
}