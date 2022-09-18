#include <stdio.h>
#include <string.h>
int vowelCount(char arry[]);
int main()
{
    char word[100];
    printf("enter the string\n");
    fgets(word,100,stdin);
    printf("no. of space is %d", vowelCount(word));

    return 0;
}
int vowelCount(char arry[]){
    int count = 0;
    for (int i = 0; arry[i] != '\0'; i++)
    {
        if (arry[i] == ' ')
        {
            count++;
        }
    }

    return count;
    
}




