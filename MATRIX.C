#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],c[3][3],i,j;
int temp=0;
int b[3][3]={0};
clrscr();
printf("Enter 9 numbers of first matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter 9 numbers of second matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}}

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
getch();
}