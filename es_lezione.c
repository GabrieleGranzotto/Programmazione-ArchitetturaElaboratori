#include<stdio.h>


//Dato un numero
//
//C_1 C_2 C_3 ... C_n
//
// calcolare la somma delle cifre con una funzione ricorsiva

int somma(int n)
{
    if(n<10)
        return(n);
    else
        return((n%10)+somma(n/10));

}


int main(void)
{
    int x;
    printf("\n\nInserire il numero: ");
    scanf("%d",&x);
    x=somma(x);
    printf("\n\nIl risultato e': %d\n\n",x);

    return 0;
}