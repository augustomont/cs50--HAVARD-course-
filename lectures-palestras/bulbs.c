#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BITS_IN_BYTE 8

void print_bulb(int bit);

int main(void)
{
    string text = get_string("Message: ");

    for (int i = 0; i < strlen(text); i++)
    {
        int byte[BITS_IN_BYTE];
        int valor = text[i];

        for (int j = 0; j < 8; j++) // save char values
        {
            byte[7 - j] = valor % 2;
            valor = valor / 2;
        }

        for (int j = 0; j < 8; j++) // print char values
        {
            print_bulb(byte[j]);
        }

        printf("\n");
    }
}

void print_bulb(int bit)
{
    printf("%i", bit);
    /*if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }*/
}
