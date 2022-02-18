#include<stdio.h>


int main(void)
{
    int v1=5;
    int v2=7;
    int *p1;
    int *p2;
    int *p3;

    //1
    //printf("1) Valore dei puntatori P1 e P2: %d, %d\n\n", *p1, *p2);
    //2
    printf("2) Indirizzo dei puntatori P1 e P2: %p, %p\n\n", p1, p2);
    //3
    p1=&v1;
    p2=&v2;
    //4
    printf("4) Valore dei puntatori P1 e P2: %d, %d\n\n", *p1, *p2);
    //5
    v1++;
    printf("5) Valore di V1: %d\n\n",v1);
    //6
    printf("6) Valore del puntatore P1: %d\n\n",*p1);
    //7
    p2=&v1;
    //8
    *p1++;
    //9
    printf("9) Valore del puntatore P2: %d\n\n",*p2);
    //10
    p3=p2;
    //11
    printf("11) Valore del puntatore P3: %d\n\n",*p3);
    //12
    *p3--;





    return 0;
}