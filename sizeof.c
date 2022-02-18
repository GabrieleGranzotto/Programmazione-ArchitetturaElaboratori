#include<stdio.h>

int main(void)
{   
    int a[10];
    printf("Dimensione del vettore: %lu",sizeof(a)/sizeof(a[0]));

    return 0;
}