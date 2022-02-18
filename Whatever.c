#include<stdio.h>
#include<stdlib.h>


struct elemento
{
    int info;
    struct elemento* next;
};
typedef struct elemento ElementoDiLista;
typedef struct ElementoDiLista* ListaDiElementi;

int main(void)
{
    ListaDiElementi lista = NULL;
    int N = 10;

    ListaDiElementi *new = (ListaDiElementi)malloc(sizeof(ElementoDiLista));
    (*new).info = 1;

    lista = new;

    for(int i=2; i<N; i++)
    {
        (*new).next = (ElementoDiLista*)malloc(sizeof(ElementoDiLista));
        new = new->next;

        new.info = i;
    }
    new->next = NULL;

    return 0;
}
