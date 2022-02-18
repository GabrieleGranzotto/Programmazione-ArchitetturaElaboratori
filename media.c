#include <stdio.h>


int main(void)
{
    float x=1;
    float somma=0;
    float media;
    int i=0;
    printf("\nQuesto programma calcola la media aritmetica di una serie di Numeri Reali.\n");
    printf("Per uscire da ciclo inserire il valore 0 nell'immisione di dati.");
    printf("\n\nInserzione dei numeri: \n");
    while (x!=0)
    {
        i++;
        printf("%d) ",i);
        scanf("%f",&x);
        somma=somma+x;
    }
    media = somma / (i - 1.0);
    printf("\n\nSomma: %f", somma);
    printf("\nMedia: %f\n\n", media);

    return 0; 
}