#include<stdio.h>

int main(void)
{
    int a;
    printf("\nInserire un numero naturale: ");
    scanf("%d",&a);
    printf("\n\nIl numero naturale precedente: %d", a-1);
    printf("\nIl numero naturale successivo: %d\n\n", a+1);
    

    return 0;
}