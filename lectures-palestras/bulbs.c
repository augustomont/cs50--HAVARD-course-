#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string text = get_string("Message: ");


    for(int i = (strlen(text) - 1); i >= 0; i--)
    {
        for (int j = 8; j > 0; j--)
        {
            int byte = 0;
            if (text[i] > 1)
            {
                byte = text[i] % 2;
                print_bulb(byte);
            }
            else
            {
                print_bulb(byte);
            }
            text[i] = text[i] / 2;
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
