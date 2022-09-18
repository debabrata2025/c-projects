//salting
#include <stdio.h>
#include<string.h>
void salting(char str[]);
int main()
{
    char wd[100];
    printf("enter string\n");
    scanf("%s", wd);
    salting(wd);
    return 0;
}
void salting(char str[]){
    char salt[] = "123";
    char ps[200];
    strcpy(ps,str);
    strcat(ps,salt);
    puts(ps);
}




