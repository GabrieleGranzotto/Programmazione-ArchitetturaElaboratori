#include<stdio.h>

int abs(double x)
{
    if (x<0) return -x;
    else return x;
}

int uguali(double p, double q)
{
    if (abs(p-q)<=0.0001) return 1;
    else return 0;
}

int main(void)
{
    double x,y;
    printf("Primo Numero: ")
    scanf("%lf",&x);
    printf("Secondo Numero: ")
    scanf("%lf",&y);
    if (uguali(x,y)==1) Printf("UGUALI PROPRIOOO!");
    else printf("COME 'NA CATAPULTAH!");

    return 0;
}