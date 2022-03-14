#include<stdio.h>
#include<stdlib.h>

int potenza(int base, int esponente)
{
    if (esponente==1) return base;
    else if (esponente>1) return potenza(base,esponente-1)*base;
}

int funzione_ricorsiva(int n)
{
    if (n==0) return 3;
    else if (n>0) return 2*funzione_ricorsiva(n-1) + potenza(2,n);
}

int funzione_iterativa(int n)
{
    return 3*potenza(2,n) + n*potenza(2,n);
}

void differenza(int n)
{
    int a1 = funzione_ricorsiva(n);
    int a2 = funzione_iterativa(n);

    printf("\n%d - %d", a1, a2);

    if (abs(a1-a2)<0.001f) printf("\nLa funzione converge\n\n");
}


int main(void)
{
    int n=15;
    differenza(n);

    return 0;
}