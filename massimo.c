#include<stdio.h>

int main(void)
{
    int N;
    float x,max,min;
    
    printf("\nQuesto programma prende una serie di numeri e trova il maggiore.\n");
    
    printf("\nInserire il numero dei valori da analizzare: ");
    scanf("%d",&N);
    if (N<1) printf("Errore: Input errato!");
    else
    {    
        printf("\n\n Adesso inserire i %d Numeri Reali: \n1) ",N);
        scanf("%f",&max);
        min = max;
        for (int i = 2; i <= N; i++)
        {
            printf("%d) ",i);
            scanf("%f",&x);
            if (x>max) max=x;
            if (x<min) min = x;
        }
        printf("\n\nIl Massimo tra questi %d numeri e': %.3f\n\n",N,max);
        printf("\n\nIl Minimo tra questi %d numeri e': %.3f\n\n",N,min);
    }

    return 0;
}