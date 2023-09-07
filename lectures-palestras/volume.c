#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define HEADER_SIZE 44

int main(int argc, char *argv[])
{
    

    if (argc != 4)
    {
        printf("Please, enter the input file, output file, and de factor");
        return 1;
    }

    FILE* input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("File input not found!");
        return 1;
    }

    FILE* output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("File output not found!");
        return 1;
    }

    float factor = atof(argv[3]);

    uint8_t headerBuffer[HEADER_SIZE];
    fread(headerBuffer, sizeof(uint8_t), HEADER_SIZE, input);
    fwrite(headerBuffer, sizeof(uint8_t), HEADER_SIZE, output);

for (int i = 0; i < HEADER_SIZE; i++)
{
    printf("%i ", headerBuffer[i]);
}

    int16_t bodyBuffer;
    while(fread(&bodyBuffer, sizeof(int16_t), 1, input))
    {
        bodyBuffer *= factor;
        fwrite(&bodyBuffer, sizeof(int16_t), 1, output);
    }



    fclose(input);
    fclose(output);
    
}