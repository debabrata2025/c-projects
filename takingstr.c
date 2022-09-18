#include <stdio.h>

int main()
{
    printf("enter string\n");
    char str[100];
    char ch;
    int i;
    for (i = 0; ch != '\n'; i++)
    {
        scanf("%c", &ch);
        str[i] = ch;
    }
    str[i] = '\0';

    printf("your str is %s", str);
    
    return 0;
}