#include <stdio.h>

int PoN(int n)
{
    if (n<0) return 1;
    else return 0;
}

int Abs(int n)
{
    if (n<0) return -n;
    else return n;
}


int main(void)
{
    int x, y;

    printf("\nInserire i due numeri: \n");
    printf("\nPrimo Numero: ");
    scanf("%d",&x);
    printf("\nSecondo Numero: ");
    scanf("%d",&y);
    
    if (x%2==0) printf("\nA e' Pari.");
    else printf("\nA e' Dispari.");

    if (PoN(y)==0) printf("\nB e' Positivo.");
    else printf("\nB e' Negativo.");

    printf ("\nLa somma e' %d.\n", x + y);

    if (PoN(x*y)==0)
    {
        if (PoN(x)==0) printf("La somma massima dei due e' data da (+A)+(+B).");
        else printf("La somma massima dei due e' data da (-A)+(-B).");
    }
    else 
    {
        if (PoN(x)==0) printf("La somma massima dei due e' data da (+A)+(-B).");
        else printf("La somma massima dei due e' data da (-A)+(+B).");
    }

    printf("\nLa somma massima e' %d.\n\n", Abs(x) + Abs(y));

    return 0;
}