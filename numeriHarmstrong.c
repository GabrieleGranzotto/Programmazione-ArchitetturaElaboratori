#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct elemento
{
    int info;
    struct elemento* next;
};

typedef struct elemento Lista;


void addT(Lista** testa, int valore)
{
    Lista* nuovo = (Lista*) malloc(sizeof(Lista));
    nuovo->info = valore;

    if (*testa==NULL) nuovo->next = NULL;
    else nuovo->next = *testa;
    *testa = nuovo;
}

int calcolo_Armstrong(Lista* testa, int cifre)
{
    Lista* punta = testa;
    int risultato = 0;

    if (punta == NULL) printf("La lista e' vuota...");
    else
    {
        while (punta->next != NULL)
        {
            risultato = risultato + pow((punta->info),cifre);
            punta = punta->next;
        }
        risultato = risultato + pow((punta->info),cifre);
    }
    return risultato;
}

void print_list(Lista* testa)
{
    Lista* punta = testa;
    if (punta == NULL) printf("La lista e' vuota...");
    else
    {
        while (punta->next != NULL)
        {
            printf("%d\n",punta->info);
            punta = punta->next;
        }
        printf("%d\n",punta->info);
    }
}


int main(void)
{
    Lista* testa = NULL;
    int numero, numero_parziale, resto;
    
    printf("\nQuesto e' un programma che serve per verificare se un numero appartiene ai numeri di Armstrong.\n");
    printf("Inserire il numero da analizzare: ");
    scanf("%d",&numero);

    int contatore=0;
    numero_parziale = numero;
    while (numero_parziale != 0)
    {
        resto = numero_parziale % 10;
        numero_parziale = numero_parziale / 10;
        addT(&testa, resto);
        contatore++;
    }

    int risultato = calcolo_Armstrong(testa, contatore);
    printf("\nNumero: %d\nRisultato: %d\n\n",numero, risultato);
    if (risultato == numero) printf("Il numero e' un numero di Armstrong!");
    else printf("Il numero non e' un numero di Armstrong.");
    printf("\n\n\n");

    return 0;
}
