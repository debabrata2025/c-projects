#include <stdio.h>
void slicing(char arry[], int m, int n);
int main()
{
    int m,n;
    char str[100];
    printf("enter the cahrecter\n");
    scanf("%s", str);
    printf("enter the start point and end point\n");
    scanf("%d\t%d", &m, &n);
    slicing(str, m, n);

    return 0;
}
void slicing(char arry[], int m, int n){
    int i,j;
    char a[100];
    for ( i = m,j=0; i<=n; i++, j++)
    {
        a[j] = arry[i];
    }
    a[j] = '\0';
    printf("the slice is %s", a);
    
}