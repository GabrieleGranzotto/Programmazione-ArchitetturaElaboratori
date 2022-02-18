#include<stdio.h>
#include<math.h>


float var(float a[])
{
    float somma=0;
    printf("Riempire il vettore: \n");
    for (int i=0; i<10;i++)
    {
        printf("%d - ",i+1);
        scanf("%f",&a[i]);
        somma=somma+a[i];
    }
    float media=somma/10.0;
    float z=0.0;
    for (int i=0; i<10; i++)
    {
        z=z+pow(a[i]-media,2.0);
    }
    z=z/10.0;
    return z;
}


int main(void)
{
    float array[10];
    float x=var(array);
    printf("La varianza e': %.3f",x);

    return 0;
}