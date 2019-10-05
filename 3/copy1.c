#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    // Get a string
    string s = get_string("s: ");
    if (!s)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);
    if (!t)
    {
        return 1;
    }

    //  Copy string into memory
    strcpy(t, s);

    // Capitalize first letter in string
    if  (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    //  Print string twice!
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}