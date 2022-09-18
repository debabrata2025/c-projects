//find the length of string by taking string from user;

#include <stdio.h>
#include <string.h>
int strcount(char arry[]);
int main()
{
    char str[100];
    
    printf("enter the charecter\n");
    fgets(str,100,stdin);
    printf("no of charecter is %d", strcount(str));
    return 0;
}
int strcount(char arry[]){
    int count = 0;
    for (int i = 0; arry[i] != '\n'; i++)
    {
        count++;
    }
    return count;
}



