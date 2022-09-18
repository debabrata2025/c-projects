# include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student cse[100];
    cse[0].roll = 201;
    cse[0].cgpa = 9.7;
    strcpy(cse[0].name, "debu");

    printf("name = %s\n", cse[0].name);
    printf("roll = %d\n", cse[0].roll);
    printf("cgpa = %f\n", cse[0].cgpa);

    return 0;
}