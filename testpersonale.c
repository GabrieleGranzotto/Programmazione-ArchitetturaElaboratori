#include<stdio.h>
#include<stdlib.h>
 
struct elemento 
{
    int info;
    struct elemento *next;
};

typedef struct elemento ValoreElementi;
typedef ValoreElementi *ListaElementi;

void addT(ListaElementi *l, int x)
{
    ListaElementi new = (struct ValoreElementi *)malloc(sizeof(ValoreElementi));
    (*new).info = x;
    (*new).next = *l;
    *l = new;
}

void cancT(ListaElementi *l)
{
    ListaElementi old = *l;
    *l = (*l).next;
    free(old);
}

int main(void)
{
    ListaElementi lista;
    lista = (struct ValoreElementi *)malloc(sizeof(ValoreElementi));

    (*lista).info = 100;
    (*lista).next = NULL;

    return 0;
}
