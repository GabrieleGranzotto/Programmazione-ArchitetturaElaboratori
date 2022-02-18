#include<stdio.h>
#include<math.h>

float SerieIterativa(float x, int n)
{
    float a;
    for(int i=0;i<=n;i++)
    {
        a=a+pow(x,i);
    }
    return a;
}

float SerieRicorsiva(float x, int n)
{
    if (n==0) return 1;
    else return pow(x,n)+SerieRicorsiva(x,n-1);
}

int main(void)
{
    int cicli;
    printf("Inserire il numero dei cicli del programma: ");
    scanf("%d",&cicli);
    printf("\nInserire il valore Reale da cui partire la Somma: ");
    float seed;
    scanf("%f",&seed);
    float //somma = SerieIterativa(seed, cicli);
    somma = SerieRicorsiva(seed, cicli);
    if (abs(somma-(1-pow(seed,cicli+1))/(1-seed))<=0.0001) printf("\n\nLa serie converge correttamente.\n\n\n");
    else
        printf("\n\nLa serie non converge correttamente.\n\n\n");

    return 0;
}