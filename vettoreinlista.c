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
        while (punta->next != NULL)
        {
            punta = punta->next;
        }
        punta->next = nuovo;
    }
}

void array_list(int a[], int dim, Lista** testa)
{
    for (int i=0; i<dim; i++)
    {
        int flag = 0;
        if (*testa == NULL) append(testa, a[i]);
        else
        {
            Lista* punta = *testa;

            while (punta->next != NULL && flag != 1)
            {
                if (punta->info == a[i]) flag = 1;
                punta = punta->next;
            }
            if (punta->info == a[i]) flag = 1;

            if (flag == 0) append(testa, a[i]);
        }
    }
}

void print_list(Lista* testa)
{
    Lista* punta = testa;

    printf("Lista creata dal vettore senza ripetizioni: \n[");
    while (punta->next != NULL)
    {
        printf("%d - ",punta->info);
        punta = punta->next;
    }
    printf("%d]\n",punta->info);
}


int main(void)
{
    printf("\nQuesto e' un programma che, dato un vettore, restituisce la lista senza ripetizioni.\n");


    Lista* testa = NULL;

    int dim;
    printf("\nInserire la dimensione dell'array: ");
    scanf("%d",&dim);
    printf("\n");

    int* a = (int*) malloc(sizeof(int)*dim);
    printf("Inserire i valori del vettore: \n");
    for (int i=0; i<dim; i++)
    {
        printf("%d) ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\n");

    array_list(a, dim, &testa);

    print_list(testa);

    printf("\n\n\n");
    return 0;
}