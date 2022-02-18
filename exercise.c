#include<stdio.h>


int main()
{
    int x,y,swap;

    printf("Inserire il primo numero intero: ");
    scanf("%d",&x);
    printf("\nInserire il secondo numero intero: ");
    scanf("%d",&y);
    printf("\n\nQuesto e' l'ordine della prima variabile e della seconda: %d - %d", x,y);
    swap=x;
    x=y;
    y=swap;
    printf("\n\n\nIl valore della prima variabile e' stato invertito con il secondo: %d - %d \n\n\n", x,y);
    

    return 0;
}