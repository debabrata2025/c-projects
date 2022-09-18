#include <stdio.h>
int vowelCount(char arry[]);
int main()
{
    char word[100];
    printf("enter the string\n");
    scanf("%s", word);
    printf("no. of vowel is %d", vowelCount(word));

    return 0;
}
int vowelCount(char arry[]){
    int count = 0;
    for (int i = 0; arry[i] != '\0'; i++)
    {
        if (arry[i] == 'a' ||arry[i] == 'e' ||arry[i] == 'i' ||
        arry[i] == 'o' ||arry[i] == 'u')
        {
            count++;
        }
    }

    return count;
    
}




