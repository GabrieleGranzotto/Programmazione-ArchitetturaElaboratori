#include<stdio.h>

//Dati due interi a, b > 0
//visualizzare con printf l'intervallo [a,b]
//stampando con una procedura ricorsiva i numeri pari o dispari nell'intervallo
//in base al valore iniziale di a
//
//a=1, b=6 -> 1, 3, 5
//a=2, b=10-> 2, 4, 6, 8, 10

void es(int a, int b)
{
    if(a<=b)
    {
        printf("%d ",a);
        return(es(a+2, b));
    }

}


int main(void)
{
    int x,y;
    scanf("%d",&x);
    printf("\n");
    scanf("%d",&y);
    printf("\n");
    es(x,y);

    return 0;
}