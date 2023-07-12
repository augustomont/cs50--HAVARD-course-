#include <stdio.h>
#include <cs50.h>


int main(void)
{
    char c1 = 'H';
    char c2 = 'i';
    char c3 = '!';
    printf("%i %i %i\n", c1, c2, c3);

    string s[2];
    s[0] = "Ola";
    s[1] = "Fui";
    printf("%c %c %c ", s[0][0], s[0][1], s[0][2], s[0][3]);
    printf("%c %c %c", s[1][0], s[1][1], s[1][2], s[1][3]);

}