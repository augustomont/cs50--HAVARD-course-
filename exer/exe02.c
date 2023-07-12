#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nome = get_string("Digite seu nome: ");
    printf("hello %s!",nome);
}