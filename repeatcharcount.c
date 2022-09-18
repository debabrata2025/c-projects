#include <stdio.h>
#include<string.h>
int repeatCount(char arr[], char a);
int main()
{
    char str[100];
    printf("enter string\n");
    fgets(str,100,stdin);
    char ch;
    printf("enter the charecter\n");
    scanf("%c", &ch);
    printf("the charecter is repeatating %d times", repeatCount(str, ch));

    return 0;
}
int repeatCount(char arr[], char a){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == a)
        {
            count++;
        }     
    } 
    return count;   
}


