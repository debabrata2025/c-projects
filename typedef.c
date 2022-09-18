#include <stdio.h>
#include <string.h>

typedef struct computerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[100];
} coe;

typedef struct Student
{
    int roll;
    float cgpa;
    char name[100];
} stu;

int main()
{
    coe s1;
    s1.roll = 201;
    printf("roll of s1 : %d\n", s1.roll);

    stu s2 = {2011, 9.8, "radhe"};
    stu *ptr = &s2;
    printf("roll of s2: %d\n", ptr->roll);
    printf("cgpa of s2: %f\n", ptr->cgpa);
    printf("name: %s\n", ptr->name);

    return 0;
}