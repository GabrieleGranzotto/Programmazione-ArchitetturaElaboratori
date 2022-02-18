#include<stdio.h>
#include<stdlib.h>

//creazione della struct con numero/puntatore
struct elemento
{
    int info;
    struct elemento *next;
};

//rinominazione della lista in Lista (zucchero sintattico)
typedef struct elemento Lista;

//funzione che aggiunge un valore alla fine della lista
void append(Lista* testa, int valore)
{
    Lista* punta=NULL; //creazione di un "segnalibro" per indicare dove in quel momento si è arrivati
    punta = testa; //punta prende il link alla testa, quindi punta dove sta puntando "testa"
    //ciclo che scorre tutta la lista e arriva all'ultimo elemento
    while (punta->next == NULL)
    {
        punta = punta->next;    //punta si sposta sul nodo successivo della lista attraverso il link
    }
    //creazione del nuovo elemento e collegamento dei puntatori
    if (punta->next == NULL)
    {
        Lista* succ = (Lista*) malloc(sizeof(Lista));
        punta->next = succ;
        punta = punta->next;
        punta->info = valore;
        punta->next = NULL;
    }
}

//funzione che stampa l'intera lista
void print_list(Lista* testa)
{
    int i=1;
    Lista* punta = NULL; 
    punta = testa;
    //ciclo che scorre tutti i valori e li stampa
    while (punta->next == NULL)
    {
        printf("%d - %d\n",i, punta->info);
        i++;
        punta = punta->next;
    }
    printf("%d - %d\n\n",i, punta->info); //va aggiunto un elemento in più perché il ciclo precedente si ferma al valore con NULL su next
}

int main(void)
{
    Lista *testa = NULL; //creazione di una "testa" vuota come inizio della lista
    //ciclo che fa caricare 3 elementi alla lista vuota "testa"
    for (int i=0; i<3; i++)
    {
        append(testa, i+1);
    }
    //stampa la lista degli elementi
    print_list(testa);
    
    return 0;
}