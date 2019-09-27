#include <stdio.h>
#include <cs50.h>


int main(void)
{
    // get scores from user and push them to a declared array of type int
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }
    
    // Chart scores
    for (int i = 0; i < 3; i++)
    {
        printf("Score %i: ", i + 1);
        chart(scores[i]);
    }

void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
