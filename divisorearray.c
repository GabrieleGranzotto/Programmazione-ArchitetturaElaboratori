#include <stdio.h>

int divisore(int a[], int dim)
{
    int j=0;
    int flag=0;
    int i = 0;
    while (i < dim && flag == 0)
    {
        flag = 1;
        while (j < dim && flag==1)
        {
            if (a[j]%a[i]==0) flag=1;
            else flag = 0;
            j++;
        }
        i++;
    }
    return flag;
}


int main(void)
{
    int array[5] = {2, 4, 6, 8, 10};
    int dimensione = 5;

    printf("\nIl risultato e' %d\n\n", divisore(array, dimensione));

    return 0;
}
    