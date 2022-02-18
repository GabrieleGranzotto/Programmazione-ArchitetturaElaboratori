#include<stdio.h>

int minimo(int p, int q)
{
    if (p<q) return p;
    else return q;
}

int minimo3(int p, int q, int z)
{
    return minimo(minimo(p,q),z);
}

int massimo(int p, int q)
{

}