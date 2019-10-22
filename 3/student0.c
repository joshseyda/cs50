#include <stdio.h>
#include <cs50.h>
#include "struct.h"

int main(void)
{
    // Space for students
 int enrollment = get_int("Enrollment: ");
 student students[enrollment];

// Prompt for students name and dorm
 for (int i = 0; i < enrollment; i++)
 {
     students[i].name = get_string("Name: ");
     students[i].dorm = get_string("Dorms: ");
 }

//  print students name and dorm
 for (int i = 0; i < enrollment; i++)
 {
     printf("%s is in %s\n", students[i].name, students[i].dorm);
 }
}