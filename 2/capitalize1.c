#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i= 0, n = strlen(s); i < n; i++)
    {
       // man toupper will give you a linux manual explaining the command 
           printf("%c", toupper(s[i])); 
    }   
}
