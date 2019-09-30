#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Name: ");
    
    int n = 0;
    // this \0 is the null char in C at the end of a string, useful  for evaluating without built in length properties
    while (s[n] != '\0')
    {
        n++;
    }
    
    printf("The length of your name is %i\n", n);
}
