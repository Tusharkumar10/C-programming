#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],c[3][3],i,j;
int temp=0;

clrscr();
printf("Enter 9 numbers of matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}}
 printf("\nMatrix you have entered\n\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{  if(i>=j)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
//b[i][j]=a[j][i];   Or you can store the transpose of the matrix into the another matrix
}}}
printf("\nMatrix after transpose\n\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
getch();
}