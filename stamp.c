#include<stdio.h>

int main(void)
{
    int a[10];
    for (int i=0;i<10;i++)
    {
        printf("%d- ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<10;i++)
    {
        printf("%d - ",*(a+i));
    }

return 0;
}