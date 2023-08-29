#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL)// WHen the value or the lengh is bigger then de size of memory, it returns NULL.
    {
        return 1; //in this case, it will stop the program, otherwise it would crash the whole computer.
    }

    char *t = malloc(strlen(s) + 1); // <stdlib.h> Malloc set a space in memory for this new vareble. Otherwise it would point the same space in memory, which will interconect all changes between them.
    if (t == NULL)
    {
        return 1;
    }

    for (int i = 0, n = strlen(s) + 1; i < n; i++) //strcpy(t, s); The same as string copy. Always use a stitic value (n) in the "for loop",
    {
        t[i] = s[i];
    }

    if (strlen(s) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);//you should always free the space memory you asked with malloc. this is a rule!!!

    return 0;
}