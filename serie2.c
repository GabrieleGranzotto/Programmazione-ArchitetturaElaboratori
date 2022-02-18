#include<stdio.h>
#include<math.h>

float SerieIterativa(float p, int n)
{
float a=p;
for (int i=2;i<=n;i++)
{
    a=0.5*(a+p/a);
}
return a;
}

float SerieRicorsiva(float p, int n)
{
if (n==1) return p;
else return 0.5*(SerieRicorsiva(p,n-1)+p/SerieRicorsiva(p,n-1));
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
    if (abs(somma-sqrt(seed))<=0.0001) printf("\n\nLa serie converge alla radice quadrata di P.\n\n\n");
    else
        printf("\n\nLa serie non converge a radice quadrata.\n\n\n");

    return 0;
}