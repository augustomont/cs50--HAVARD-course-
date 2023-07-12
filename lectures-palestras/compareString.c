#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s1 = get_string("First word: ");
    string s2 = get_string("Second word: ");

    if (strcmp(s1, s2) == 0)
    {
        printf("They are equal!");
    }
    else
    {
        printf("They are diferent!");
    }
}