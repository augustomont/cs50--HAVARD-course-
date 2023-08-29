#include <stdio.h>

int main(void)
{
    int a = 28;
    int b = 50;
    int *c = &a;

    *c = 14;
    c = &b;
    *c = 25;
    //char *nome = &"Augusto";

    printf("Adress: %i, Value: %i\n", &a, a);
    printf("Adress: %i, Value: %i\n", &b, b);
    printf("Adress: %i, Value: %i\n", &c, c);
}