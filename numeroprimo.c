#include <stdio.h>

int primo_iterativo(int x)
{
    int y=0;
    int i=2;
    while (i<=x/2||y==1)
    {
        if (x%i==0) y=0;
        else y=1;
        i++;
    }
    return y;
}

int primo_ricorsivo(int x, int y)
{
    if (x%y!=0) return primo_ricorsivo(x,y-1);
    else
    {
        if (y==1) return 0;
        else return 1;
    }
}


int main(void)
{
    int n;
    printf("\nInserisci un numero intero: ");
    scanf("%d",&n);
    printf("\n\n");
    int primo = 1;
    for (int i = 2; i <= n; i++)
    {
        primo = primo_ricorsivo(i, i-1);
        if (primo == 0) printf("%d - ", i);
    }
    printf("FINE\n\n\n");

    return 0;
}