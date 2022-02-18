#include <stdio.h>


float Saldi(float x, int percento)
{
    return x * (100.0 - percento) / 100.0;
}

int main(void)
{
    float prezzo;
    int sconto;
    printf("Costo del capo d'abbigliamento: ");
    scanf("%f",&prezzo);
    printf("\nSconto applicato al capo in percentuale: ");
    scanf("%d",&sconto);
    prezzo = Saldi(prezzo,sconto);
    printf("\n\nIl prezzo del capo scontato e' di %.2f\n",prezzo);

    return 0;
}