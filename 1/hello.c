#include <stdio.h>
#include <cs50.h>

// clang hello.c to run compiler
// ./a.out will run the compiled code
// clang -o hello hello.c enables you to run ./hello instead of a.out
// make hello is a less verbose way to do the line above
// gcc -g hello.c -o hello -lcs50 -lm  <- needed this command to run with cs50 library properly.

int main(void)
{
  string name = get_string("What is your name>\n");
  printf("hello, %s\n", name);
}
