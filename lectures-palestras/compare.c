#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Type a integer number: ");

    if (num%2==0){
        printf("%i is an even number!\n",num);
    } else{
        printf("%i is an odd number!\n",num);
    }
}