#include <stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void studentInfo(struct student s1);
int main()
{
    struct student s1 = {204, 9.5, "Radhe"};
    studentInfo(s1);
    return 0;
}
void studentInfo(struct student s1){
    printf("student Information\n");
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

}