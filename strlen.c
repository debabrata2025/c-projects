//string length
#include <stdio.h>
int stringlen(char arry[]);
int main()
{
    char str[] = "debu";
    printf("string length is %d", stringlen(str));

    return 0;
}
int stringlen(char arry[]){
    int count = 0;

    for (int i = 0; arry[i]!='\0'; i++)
    {
        count++;
    }
       
    return count;
}