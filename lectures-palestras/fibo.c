#include <stdio.h>
#include <cs50.h>

long fibo(int n);

int main(void)
{
    int num = get_int("Digite um numero: ");
    long res = fibo(num);

    printf("O %i numero de fibonacci e %ld\n", num, res);
}

long fibo(int n)
{
    if(n == 0 || n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}