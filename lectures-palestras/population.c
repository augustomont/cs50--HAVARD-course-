#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int start;
    do
    {
        start = get_int("Start populatio: ");
    } while (start < 9);
    
    int end;
    do
    {
        end = get_int("End population: ");
    } while (end<=start);
    
    int pop = start;
    int i;
    for(i = 0; pop<end; i++)
    {
        pop = pop + (pop/3) - (pop/4);
    }
    
    printf("%i years", i);
}
