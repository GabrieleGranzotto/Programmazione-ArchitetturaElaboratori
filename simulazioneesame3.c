//simulazione di esame per Programmazione1
//esercizio n.3

int lunghezza(char stringa[],int i)
{
    if (stringa[i]=='\0') return 1;
    else return 1+lunghezza(stringa, i+1);
}

int main(void)
{
    char stringa[4]={'o','t','t','o'};
    int lun = lunghezza(stringa, 0);
    return 0;
}