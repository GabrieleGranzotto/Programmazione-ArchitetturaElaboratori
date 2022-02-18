#include <stdio.h>

int fibonacci_iterativa(int n)
{
    int fib=1;
    int fib_n=1;
    for (int i=2; i<n; i++)
    {
        int fib_v=fib_n;
        fib_n=fib;
        fib=fib_n+fib_v;
    }
    return fib;
}

int fibonacci_ricorsiva(int n)
{
    if (n==1) return 1;
    if (n==2) return 1;
    else return fibonacci_ricorsiva(n-2)+fibonacci_ricorsiva(n-1); 
}

int main(void)
{
    int x=5;
    for (int i = 1; i <= x;i++)
    {
        printf("%d\n", fibonacci_iterativa(i));
    }
    return 0;
}