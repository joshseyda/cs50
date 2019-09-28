#include <stdio.h>
#include <cs50.h>
// this file is incomplete in implementation but functions as an exploration of array and nested looping in C
const int COUNT = 3;
void chart(int count, int scores[]);

int main(void)
{
    // get scores from user and push them to a declared array of type int
    int scores[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }
    
    // Chart scores
    for (int i = 0; i < COUNT; i++)
    {
        printf("Score %i: ", i + 1);
        chart(COUNT, scores[i]);
    }
}

void chart(int count, int scores[])
{    
    for (int i = 0; i < count; i++)
    {
            for (int j = 0; j < scores; j++)
    {
        printf("#");
    }
    printf("\n");
    }
}
