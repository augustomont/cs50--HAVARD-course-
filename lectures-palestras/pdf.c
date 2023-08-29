#include <stdio.h>
#include <cs50.h>
#include <stdint.h> //used for uint8_t buffer

//37 80 68 70 PDF signature - all pdf files start with this bytes as a sinal of its type

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("improper usege.\n");
        return 1;
    }

    //Open file
    string filename = argv[1];
    FILE *file = fopen(filename, "r");

    //Check if file exists
    if (file == NULL)
    {
        printf("No such file found.\n");
        return 1;
    }

    // uint8_T - it is a type of data. "u" is for unsigned. therefore only positive numbers. int for integer. "8" for only 1 byte. therefore only 8 bits. "t" for its own type.
    uint8_t buffer [4];
    fread(buffer, 1, 4, file);
    for (int i = 0; i < 4; i++)
    {
        printf("%i", buffer[i]);
    }
    
}