#include <stdio.h>

int sommaric(int n)
{
    if (n==1)
        return(1);
    else
        return(n+sommaric(n-1));
}

int sommait(int n)
{
    int i,y;
    i=1;
    y=n;
    while(i<y)
    {
        n=n+i;
        i=i+1;
    }
    return(n);
}

int sommaan(int n)
{
    int s;
    s= (n*(n+1))/2;
    return(s);
}

int main(void)
{
    int x;
    int s1,s2,s3;
    printf("Dammi il numero: ");
    scanf("%d",&x);
    printf("\n\n");
    s1=sommait(x);
    s2=sommaric(x);
    s3=sommaan(x);
    printf("\n\nI tre risultati sono: %d -- %d -- %d\n\n", s1, s2, s3);

    return 0;
}