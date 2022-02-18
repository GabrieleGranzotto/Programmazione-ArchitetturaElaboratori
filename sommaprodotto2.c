#include<stdio.h>

int sommaprodotto(int *x, int *y, int *z)
{
    *z=*x+*y;   
    return *x*(*y);
}

int main(void)
{
    int a,b,somma;
    printf("Valore di a: ");
    scanf("%d",&a);
    printf("\nValore di b: ");
    scanf("%d",&b);
    printf("\n");
    int prodotto=sommaprodotto(&a,&b,&somma);
    printf("Somma e Prodotto di a e b sono: %d, %d\n\n\n",somma, prodotto);

    return 0;
}