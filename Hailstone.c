#include<stdio.h>

void sequenza(int n)
{
    if (n==1) printf("1.");
    else
    {
        printf("%d - ",n);
        if (n % 2 == 0) sequenza(n / 2);
        else sequenza(3*n+1);
    }
}

int lunghezza(int n)
{
    int i=1;
    while (n!=1)
    {
        if (n%2==0) n=n/2;
        else n=3*n+1;
        i++;
    }
    return i;
}


int main(void)
{
    int m;
    printf("\nInserire un numero: ");
    scanf("%d",&m);
    printf("\nInizio della sequenza: ");
    sequenza(m);
    int l=lunghezza(m);
    printf("\n\nLunghezza della sequenza: %d.\n\n\n",l);

    return 0;
}