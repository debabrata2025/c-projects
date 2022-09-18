#include<stdio.h>
void create(){
  int n,i;
  printf("Enter the size");
  scanf("%d",&n);
  printf("Enter the elements of array");
  int a[n];
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("display the elements");
  for( i=0;i<n;i++){
  printf("%d",a[i]);
  }
}
void insert(){
 int n,i;
 printf("enter the size of array");
 scanf("%d",&n);
 int a[n+1];
 printf("Enter the elements of array");
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);}
 int p,v;
 printf("Enter the position number");
 scanf("%d",&p);
 printf("Enter the value to be inserted");
 scanf("%d",&v);
 for(i=n;i>=p;i--){
 a[i]=a[i-1];
}
 printf("display the number");
 for( i=0;i<=n;i++){
printf("%d",&a[i]);
}
}
void delete(){
int n,i;
 printf("Enter the size of an array");
 scanf("%d",&n);
 int a[n];
 printf("Enter the elements of the array");
 for( i=0;i<n;i++){
 scanf("%d",&a[n]);
 int p;
 printf("enter the elements to delete");
 scanf("%d",&p);
 for( i=p-1;i<=n-2;i++){
 a[i]=a[i+1];}
 printf("display the elements");
 for( i=0;i<n-1;i++){
 printf("%d",a[i]);
}
}
}
void reverse(){
 int n,temp,i,j;
 printf("enter the size of array");
 scanf("%d",&n);
 int a[n];
 printf("enter the elememts of the array");
 for( i=0;i<n;i++){
 scanf("%d",&a[n]);
 if(n%2==0){
 for( i=n/2, j=(n/2)+1;i>=0 && j<=n-1;i--,j++){
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
}
}
else{
 for(i=n/2 , j=(n/2)+1;i>=0 && j<=n-1;i--,j++){
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
}
}
 printf("display the numbers");
 for( i=0;i<n;i++);
 printf("%d",a[i]);
}
}

int main(){
int ch;
printf("enter your choice of operation");
printf("1 for creation\n 2 for insertion \n 3 for deletion\n 4 for reversing");
scanf("%d",&ch);
switch(ch){
case 1:
create();
case 2:
insert();
case 3:
delete();
case 4:
reverse;
}
}