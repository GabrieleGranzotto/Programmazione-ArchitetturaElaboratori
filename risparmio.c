#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float stipendio, risparmio_percento, interessi_percento, patrimonio;
    int mesi;

    printf("Stipendio: ");
    scanf("%f",&stipendio);
    printf("\n");
    printf("Percentuale di %.2f risparmiata: ",stipendio);
    scanf("%f",&risparmio_percento);
    printf("\n");
    printf("Percentuale interessi sul Capitale: ");
    scanf("%f",&interessi_percento);
    printf("\n");
    printf("Mesi di tempo di risparmio: ");
    scanf("%d",&mesi);
    printf("\n");
    patrimonio=0.0;
    float accantonamento = (stipendio * risparmio_percento)/100.0;
    for (int i=0;i<mesi;i++)
    {
        patrimonio=patrimonio + patrimonio*(interessi_percento/100.0) + accantonamento;
        printf("Patrimonio al mese %d: %.2f\n",i+1,patrimonio);
        printf("Soldi guadagnati investendo: %.2f\n\n",patrimonio-accantonamento*(i+1));
    }
    printf("\n\n");
    
    return 0;
}