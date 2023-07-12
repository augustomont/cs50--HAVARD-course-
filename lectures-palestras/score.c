#include <stdio.h>
#include <cs50.h>

#define N 3

float average(int lenght, int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}






















//Using varebles
/*int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Averege: %f", ((float) score1 + score2 + score3) / 3);
}*/

//Using Array
    //Ugly and not usefull way
    /*int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;*/

    //Better way
    /*int i;
    int scores[3];
    for (i = 0; i < 3; i++)
    {
        scores[i] = get_int("score: ");
    }
        printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);*/