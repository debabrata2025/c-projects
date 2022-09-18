# include <stdio.h>
# include <string.h>

typedef struct  address
{
    int Hno;
    int block;
    char city[100];
    char state[100];
} add;


int main()
{
    int n;
    printf("enter how many details you want to store");
    scanf("%d", &n);
    add lists[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("enter the details of person %d\n", i+1);
        scanf("%d", &lists[i].Hno);
        scanf("%d", &lists[i].block);
        scanf("%s", &lists[i].city);
        scanf("%s", &lists[i].state);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the details of person %d: %d %d %s %s \n", i+1, lists[i].Hno, lists[i].block,
         lists[i].city, lists[i].state);
    }
    

    return 0;
}