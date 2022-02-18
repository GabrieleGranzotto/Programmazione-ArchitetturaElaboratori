#include<stdio.h>

float somma(float a, float b)
{
    return a+b;
}

float sottrazione(float a, float b)
{
    return a-b;
}

float moltiplicazione(float a, float b)
{
    return a*b;
}

float divisione(float a, float b)
{
    return a/b;
}

int main(void)
{
    int i;
    float x,y,risultato;
    printf("\nQuesto è un programma che calcola somme, sottrazioni, \n moltiplicazioni e divisioni.\n");
    printf("\nInserire il tipo di calcolo che si vuole fare: \t\t[1-4]\n");
    printf("1) Somme\n2) Sottrazioni\n3) Moltiplicazioni\n4) Divisioni\n\t\t\t\t\tNumero: ");
    scanf("%d",&i);
    if (i==42) printf("\n\nDon't Panic!\n\n");
    if (i!=1&&i!=2&&i!=3&&i!=4&&i!=42) printf("\n\nERRORE: Valore inserito non congruo! (Codice 10x887209)\n\n");
    if (i == 1 || i == 2 || i == 3 || i == 4)
    {
        printf("\nAdesso inserire i due numeri Reali: \n");
        printf("\nPrimo Numero: ");
        scanf("%f",&x);
        printf("\nSecondo Numero: ");
        scanf("%f",&y);
        if (i==1) risultato=somma(x,y);
        if (i==2) risultato=sottrazione(x,y);
        if (i==3) risultato=moltiplicazione(x,y);
        if (i==4) risultato=divisione(x,y);
        printf("\n\nIl risultato e': %.2f.\n\n\n", risultato);
    }
    return 0;
}