#include<stdio.h>


int duefunz(int p,int q, int *m)
{
    *m=p*q;
    return p+q;
}


int main(void)
{
    int x=5;
    int y=2;
    int prodotto, somma;
    somma=duefunz(x,y,&prodotto);
    printf("\n\n %d - %d \n\n\n",somma,prodotto);

    return 0;
}