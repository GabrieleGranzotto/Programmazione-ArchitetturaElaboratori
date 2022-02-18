//simulazione di esame per Programmazione1
//esercizio n.4

#include<stdio.h>

int palindroma(char s[], int lun)
{
    int i=0;
    int flag=1;
    int i=0; 
    while(i<lun/2 && flag==1)
    {
        if(s[i]==s[lun-i-1]) flag=1;
        else flag=0;
        i++;
    }
}

int main(void)
{
    char stringa[4]={'o','t','t','o'};
    int dim = 4;
    int x=palindroma(stringa, dim);
    printf("%d", x);

    return 0;
}