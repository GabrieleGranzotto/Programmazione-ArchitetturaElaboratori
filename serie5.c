#include<stdio.h>
#include<math.h>

int Divisori(int n)
{
    int contatore=0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0) 
        {
            n = n / i;
            contatore++;
        }
    }
    return contatore;
}

int Test(int n)
{
    int nac=0;
    for (int i=1; i<n; i++)
    {
        printf("%d\n", Divisori(i));

        if (Divisori(i)>=Divisori(n)) 
        {
            nac=1;
            break;
        }
    }
    return nac;
}

void CalcoloFinoK(int n)
{
    printf("- 1\n- 2\n");
    for (int i = 3; i <= n; i++)
    {
        int nac=Test(i);
        if (nac==0) printf("- %d\n", i);
    }
}

int main(void)
{
    int k;
    printf("Inserire il numero dei cicli del programma: ");
    scanf("%d",&k);
    printf("\n");
    CalcoloFinoK(k);

    return 0;
}