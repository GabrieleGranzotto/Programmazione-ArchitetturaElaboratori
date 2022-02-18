#include<stdio.h>


/*int Divisori(int p)
{
    int contatore=0;
    int max=p/2;
    int i=2;
    while (i<=p && p!=1)
    {
        if (p % i==0)
        {
            contatore++;
            p = p / i;
            i = 1;
        }
        i++;
    }
    return contatore;
}*/

int Divisori(int n)
{
    int contatore = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0) contatore++;
    }
    return contatore;
}

int NumeroAltamenteComposto(int x)
{
    int divx = Divisori(x);
    int booleano = 0;
    for (int i = 1; i < x; i++)
    {
        if (Divisori(i) >= divx) booleano = 1;
    }
    return booleano;
}

void Test(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (NumeroAltamenteComposto(i)==0) printf("%d - ", i);
    }
    printf("FINE.\n\n\n");
}

    int main(void)
    {
        int k;
        printf("Questo e' un programma che prende i primi k numeri \n e trova i Numeri Altamente Composti tra 1 e k.");
        printf("\nInserire il valore di k: ");
        scanf("%d", &k);
        Test(k);

        return 0;
}