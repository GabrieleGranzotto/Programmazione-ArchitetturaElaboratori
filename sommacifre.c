#include <stdio.h>

int somma_iterativa(int x)
{
    int c=0;
    while (x/10!=0)
    {
        c=c+(x%10);
        x=x/10;
    }
    c=c+(x%10);
    return c;
}

int somma_ricorsiva(int x)
{
    if (x/10==0) return x%10;
    else return x%10+somma_ricorsiva(x/10);
}



int main(void)
{
    int n;
    printf("\nInserisci un numero intero: ");
    scanf("%d",&n);
    int somma=somma_ricorsiva(n);
    printf("\n\nLa somma delle cifre di n e': %d.\n\n\n",somma);
    

    return 0;
}