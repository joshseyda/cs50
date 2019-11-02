#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *numbers = NULL;

    while (true)
    {
        int number = get_int("Number: ");

        // implement sentinal value to break out of loop check for end of function EOF
        if (number == INT_MAX)
        {
            break;
        }

        // Allocate space for number
        node *n = malloc(sizeof(node));
        // This is a check for if you are out of space
        if (!n)
        {
            return 1;
        }

        // Add number to list :::
        n->number = number;
        n->next = NULL;
        if (numbers)
        {
            // this for loop is iterating through the pointer locations, while the pointer isnt null, incrementing by moving to the next node in the list
            for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
            {
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
        else
        {
            numbers = n;
        }
    }

    free(numbers);
}