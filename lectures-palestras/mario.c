#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_block(int size);

int main(void)
{
    int n = get_size();
    print_block(n);
}



int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size of blocks: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_block(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = (size - 1); j > i ; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}