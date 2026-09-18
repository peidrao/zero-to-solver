#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{
    struct Student students[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name, age and grade: ");
    }

    return 0;
}
