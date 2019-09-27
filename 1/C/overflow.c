#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Iteratively double i until you run out of bits and get an overflow error
    for (int i = 1; ; i *= 2)
    {
        printf("%i\n", i);
        sleep(1);
    }
}
