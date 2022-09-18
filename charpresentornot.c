#include <stdio.h>
void checkChar(char arry[], char word);
int main()
{
    char chr[] = "debabrata";
    char ch;
    printf("enter the charecter you want to check\n");
    scanf("%c", &ch);
    checkChar(chr, ch);
    return 0;
}

void checkChar(char arry[], char word){
    int count = 0;
    for (int i = 0; arry[i] != '\0'; i++)
    {
        if (arry[i] == word)
        {
            count++;
        } 
    }
    if (count >= 1)
    {
        printf("charecter is present");
    }else{
        printf("charecter is not present");
    }
    
    
}





