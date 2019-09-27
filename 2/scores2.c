#include <stdio.h>
#include <cs50.h>

const int COUNT = 3;
void chart(int score);

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
        chart(scores[i]);
    }
}

void chart(int score)
{    
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
