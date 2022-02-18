#include<stdio.h>
#include<stdlib.h>

struct elemento
{
    int info;
    struct elemento* next;
};

typedef struct elemento Lista;

int main(void)
{
    Lista* testa=NULL;

    printf("%d", testa->info);

    return 0;
}