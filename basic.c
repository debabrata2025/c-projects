# include <stdio.h>
# include <string.h>

//creating structure
struct student
{
    int roll;
    float cgpa;
    char  name[100];
};


int main()
{
    struct student s1; //creating structure variables
    s1.roll = 111;
    s1.cgpa = 9.7;
    strcpy(s1.name, "debabrata");
    printf("the name of student is %s\n", s1.name);
    printf("student roll is : %d\n", s1.roll);
    printf("cgpa is %.2f\n", s1.cgpa);

    struct student s2; //creating structure variables
    s2.roll = 112;
    s2.cgpa = 8.0;
    strcpy(s2.name, "ankita");
    printf("the name of student is %s\n", s2.name);
    printf("student roll is : %d\n", s2.roll);
    printf("cgpa is %.2f\n", s2.cgpa);

    struct student s3; //creating structure variables
    s3.roll = 110;
    s3.cgpa = 9.8;
    strcpy(s3.name, "trinanjan");
    printf("the name of student is %s\n", s3.name);
    printf("student roll is : %d\n", s3.roll);
    printf("cgpa is %.2f\n", s3.cgpa);

    return 0;
}