# include <stdio.h>
# include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    
    struct student s1 = {204, 9.2, "debu"};
    struct student *ptr =  &s1;

    printf("name = %s\n", s1.name); // with structure variable
    printf("name = %s\n", (*ptr).name); // with pointer
    printf("name = %s\n", ptr->name); //arrow operator
    
    return 0;
}