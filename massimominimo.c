#include<stdio.h>

//Si scriva un programma in linguaggio C per calcolare il valore massimo e minimo di un insieme 
//N di numeri inseriti da tastiera utilizzando i puntatori. Il programma deve leggere il valore di N, 
//ed in seguito deve leggere una sequenza di N numeri. A questo punto il programma deve stampare il massimo
//e il minimo tra i numeri inseriti.

void massimominimo(int valore, int *max, int *min)
{
    if (valore<*min) *min=valore;
    if (valore>*max) *max=valore;
}


int main(void)
{
    int N;
    int valore;
    int massimo=0;
    int minimo=1000000;

    printf("\nDichiarare il numero di numeri da analizzare: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        printf("\nInserisci valore %d di %d: ",i,N);
        scanf("%d",&valore);
        massimominimo(valore,&massimo,&minimo);
    }
    printf("\n\nIl valore massimo e': %d\nIl valore minimo e': %d\n\n\n",massimo,minimo);


    return 0;
}