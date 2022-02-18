#include<stdio.h>
#include<stdlib.h>

void riempi_array(int a[], int dim)
{
    for (int i=0; i<dim; i++)
    {
        scanf("%d", &a[i]);
    }
}

int ricerca_dicotomica(int a[], int i, int l, int f)
{
    int m = (l - i) / 2;
    if (a[m] == f) return 1;
    if (i==l) return 0;
    if (a[m] < f) ricerca_dicotomica(a, i, m, f);
    if (a[m] > f) ricerca_dicotomica(a, m, l, f);
}


int main(void)
{
    int dim=5;
    int a[5]={1,2,3,4,5};
    int x = 1;
    int flag = ricerca_dicotomica(a, 0, dim - 1, x);
    if (flag==1)
        printf("Il valore e' nell'array\n\n");
    if (flag=0)
        printf("Il valore non e' nell'array\n\n");

    return 0;
}

//    int flag = 0;
//    int pointer = l / 2;
//    while (flag = 1)
//    {
//        if (a[pointer]==f) flag = 1;
//        if (a[pointer]<f) pointer = pointer / 2;
//        if (a[pointer]>f) pointer = pointer + pointer / 2;
//   }
//    return pointer;


//int main(void)
//{
 //   int dim;
 //   scanf("%d", &dim);
 //   int *a = (int*) malloc(sizeof(int) * dim);
 //   riempi_array(a, dim);
 //   scanf("%d", &x);
 //   int flag = ricerca_dicotomica(a, 0, dim - 1, x);
 //   if (flag==0)
 //       printf("Il valore e' nell'array");
//    if (flag=1)
//        printf("Il valore non e' nell'array");
//
//    return 0;
//}
