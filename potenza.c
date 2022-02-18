#include<stdio.h>

int potenza_iterativa(int p, int q)
{
    int potenza=1;
    for(int i=1;i<=q;i++)
    {
        potenza=potenza*p;
    }
    return potenza;
}

int potenza_ricorsiva(int p, int q)
{
    if(q==0) return 1;
    if(q>=1) return p*potenza_ricorsiva(p,q-1);
}