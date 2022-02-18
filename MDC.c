#include<stdio.h>

//programma che calcola il Massimo Comun Denominatore con il metodo di Euclide

//funzione che calcola il MCD in modo iterativo
int MCD(int a, int b)
{
    while (a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;
    }
    return a;
}

//funzione che calcola il MCD in modo ricorsivo
int MCD2(int a, int b)
{
    if (a==b) return a;
    if (a>b) return MCD2(a-b,b);
    if (a<b) return MCD2(a,b-a);
}

int main(void)
{
    int x,y;
    printf("\nQuesto e' un programma che calcola il MCD con il metodo di Euclide.");
    printf("\nInserire il primo numero: ");
    scanf("%d",&x);
    printf("\nInserire il secondo numero: ");
    scanf("%d",&y);
    int m=MCD(x,y);
    printf("\n\n Il MCD tra i numeri %d e %d e' %d.\n\n", x, y, m);


    return 0;
}