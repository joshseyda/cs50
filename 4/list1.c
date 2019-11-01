#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    int *numbers = NULL;
    int capacity = 0;

    int size = 0;
    while (true)
    {
        int number = get_int("Number: ");

        // implement sentinal value to break out of loop
        if (number == INT_MAX)
        {
            break;
        }

        if (size == capacity)
        {
            // realloc finds a place for the array to be stored in sequence, and moves the data
            numbers = realloc(numbers, sizeof(int) * (size + 1));
            capacity++;
        }

        numbers[size] = number;
        size++;
    }
    for (int i = 0; i < size; i ++)
    {
        printf("You inputted %i\n", numbers[i]);
    }
}