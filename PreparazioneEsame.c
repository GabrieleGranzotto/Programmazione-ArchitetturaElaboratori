#include<stdio.h>
#include<stdlib.h>

struct elemento
{
    int info;
    struct elemento* next;
};
typedef struct elemento Lista;

void append(Lista** testa, int valore)
{
    Lista* nuovo = (Lista*) malloc(sizeof(Lista));
    nuovo->info = valore;
    nuovo->next = NULL;

    if (*testa == NULL) *testa = nuovo;
    else
    {
        Lista* punta = *testa;
        while (punta->next != NULL) punta = punta->next;
        punta->next = nuovo;
    }
}

void appT(Lista** testa, int valore)
{
    Lista* nuovo = (Lista*) malloc(sizeof(Lista));
    nuovo->info = valore;
    nuovo->next = *testa;

    *testa = nuovo;
}

void print_list(Lista* testa)
{
    Lista* punta = testa;
    while (punta->next != NULL) 
    {
        printf("\n %d",punta->info);
        punta = punta->next;
    }
    if (punta->next == NULL) printf("\n %d",punta->info);
}


int main(void)
{
    Lista* lista_valori = NULL;

    for (int i=0; i<10; i++) append(&lista_valori, i+1);

    appT(&lista_valori, 69);

    print_list(lista_valori);

    return 0;
}