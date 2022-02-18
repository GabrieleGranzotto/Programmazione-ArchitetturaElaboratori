#include<stdio.h>

void funzione(int variabile)
{
    printf("\nL'indirizzo della Variabile e' %p.\n\n", &variabile);
}


int main(void)
{
    int variabile;
    printf("Inserire un Valore: ");
    scanf("%d", &variabile);
    printf("\nL'indirizzo della Variabile e' %p.\n\n", &variabile);
    funzione(variabile);

    return 0;
}