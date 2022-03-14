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

    if (*testa==NULL) *testa = nuovo;
    else
    {
        Lista* punta = *testa;
        while (punta->next!=NULL) punta = punta->next;
        punta->next = nuovo;
    }
}

void print_list(Lista* testa)
{
    Lista* punta = testa;
    while (punta->next != NULL) 
    {
        printf("%d\n",punta->info);
        punta = punta->next;
    }
    if (punta->next == NULL) printf("%d\n",punta->info);
}



int main(void)
{
    Lista* testa = NULL;
    for (int i=0; i<5; i++) append(&testa, i+1);
    print_list(testa);

    return 0;
}
