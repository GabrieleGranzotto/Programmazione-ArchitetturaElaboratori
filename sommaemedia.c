#include<stdio.h>



int main(void)
{
    int a,b;
    int somma;
    float media;
    printf("Inserire A: ");
    scanf("%d",&a);
    printf("\nInserire B: ");
    scanf("%d",&b);
    somma=a+b;
    media=somma/2;
    printf("\n\nSomma: %d\nMedia: %.2f\n\n",somma,media);

    return 0;
}