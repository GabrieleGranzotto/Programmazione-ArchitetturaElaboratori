#include<stdio.h>

void sommastringa(char s1, char s2)
{
    s2 = s2+s1;
}

int main(void)
{
    char stringa1;
    char stringa2;

    scanf("%s",stringa1);
    scanf("%s",stringa2);
    sommastringa(stringa1,stringa2);

    printf("%s",stringa1);

    return 0;
}