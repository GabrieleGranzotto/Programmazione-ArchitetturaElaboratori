//simulazione di esame per Programmazione1
//esercizio n.1
#include<stdio.h>
#include<stdlib.h>

//1
int fattoriale(int k)
{
    if (k==1)
        return 1;
    else
        return k * fattoriale(k - 1);
}

//2
int potenza(int x, int k)
{
    if (k==1)
        return x;
    else
        return x * potenza(x, k - 1);
}

float somma(int x, int n)
{
    float serie = 0.0;
    for (int k = 0; k <= n; k++)
    {
        serie = serie + (float)potenza(x, k) / (float)fattoriale(k);
    }
    return serie;
}

void verifica(int x, int n)
{
    if ((float)somma(x,n)-potenza(2.71828,(float)x)<0.001)
        printf("Tende correttamente");
}

//3
float* array(int x, int n)
{
    float *a;
    a = (float*)malloc(sizeof(float) * (n+1));
    for (int i=0; i<=n; i++)
    {
        a[i]=(float)potenza(x, i) / (float)fattoriale(i);
    }
    return a;
}

int main(void)
{
    int n;
    int x;
    float serie;
    float *vettore;

    printf("Inserire il valore k: ");
    scanf("%d", &n);
    printf("\nInserire il valore x: ");
    scanf("%d", &x);

    serie = somma(x, n);
    verifica(x, n);
    vettore = array(x, n);

    return 0;
}