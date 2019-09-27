#include <stdio.h>

void cough(void); //this is the prototype of the function, can be used here to prevent error, and the actual definition can be placed later

int main(void)
{
    for (int i = 0; i <3; i++)
    {
        cough();   
    }
}

void cough(void)
{
    printf("cough\n");
}
