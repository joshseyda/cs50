#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i= 0, n = strlen(s); i < n; i++)
    {
       if (s[i] >= 'a' && s[i] <= 'z')
       {
           printf("%c", s[i] - ('a' - 'A')); // this a-A is because the lowercase char in ascii are all 32 higher than the uppercase
       }
        else
        {
            printf("%c", s[i]);
        }
    }   
}

