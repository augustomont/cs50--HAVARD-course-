#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p); //The way of print the mamory local storage

    char *t = "HI!";
    printf("%s", t);
    printf("%s", t + 1);
    printf("%s", t + 2);
}