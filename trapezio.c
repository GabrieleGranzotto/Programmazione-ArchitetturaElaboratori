#include<stdio.h>

void area(int somma, int differenza, float* area)
{
    float baseminore=(somma-differenza)/2.0;
    float altezza=2.0*baseminore/3.0;
    *area=somma*altezza/2.0;
}

int main(void)
{
    int s,d;
    printf("Inserire il valore della somma della Base Minore e quella Maggiore: ");
    scanf("%d",&s);
    printf("\nInserire il valore della differenza della Base Minore e quella Maggiore: ");
    scanf("%d",&d);
    float superficie;
    area(s,d,&superficie);  
    printf("\nL'area del Trapezio e' %.3f.\n\n\n",superficie);

    return 0;
}