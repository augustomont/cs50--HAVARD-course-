#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

double fatorial(int x); 

int main(void)
{
    int num = get_int("Digite um numero: ");
    

    printf("O fatorial de %i e %d\n", num, fatorial(num));

    return 0;
}

 double fatorial(int x)
    {
        if(x == 1 || x == 0)
        {
            return 1;
        }
        else
        {
            return x * fatorial(x - 1);
        }
    }