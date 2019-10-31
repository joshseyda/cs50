#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <struct.h>

int main(void)
{
    // Allocate space for students
    int enrollment = get_int("Enrollment: ");
    student students[enrollment];
    // Prompt students for name and dorm
    for(i=0; i < enrollment; i++)
    {
        students[i].name = get_string("Name: ");
        students[i].dorm = get_string("Dorm: ");
    }
    //Print student name and dorm
    for(i=0; i < enrollment; i++)
    {
        printf("%s is in %s.\n", students[i].name, students[i].dorm);
    }
}