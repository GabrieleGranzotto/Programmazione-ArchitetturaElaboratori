#include<stdio.h>


// funzione fattoriale sviluppata con il metodo ricorsivo
int fattoriale(int n)
{
    if (n>1) return n* fattoriale(n-1);
    else return 1;
}

// funzione fattoriale sviluppata con il metodo iterativo
int fattoriale2(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}

//inizio del programma che carica uno dei due metodi
int main(void)
{
    int x, fact;
    printf("\nQuesto e' un programma che serve a calcolare il fattoriale di un numero Naturale.");
    printf("\nInserire il numero: ");
    scanf("%d",&x);
    if (x<0) printf("\n\nIl fattoriale e' incalcolabile dal programma.\n\n");
    else 
    {
        if (x==0) fact=1;   
        if (x>0) fact=fattoriale(x);
        printf("\n\nIl fattoriale di %d e' %d.\n",x,fact);
    }
    printf("\n\nGrazie per aver usato il programma!\n\n");
    
    return 0;
}