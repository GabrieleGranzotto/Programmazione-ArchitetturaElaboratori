#include<stdio.h>

int PoD(int n)
{
    if (n%2==0) return 0;
    else return 1;
}

int Abs(int n)
{
    if (n<0) return -n;
    else return n;
}

int main(void)
{
    int x,b;
    printf("\nInserire un Numero Intero Positivo o Negativo: ");
    scanf("%d",&x);
    printf("\n\nIl valore assoluto del numero e' %d.\n",Abs(x));
    b=PoD(x);
    if (b==0) printf("Il numero e' Pari.\n\n");
    if (b==1) printf("Il numero e' Dispari.\n\n");

    return 0;
}