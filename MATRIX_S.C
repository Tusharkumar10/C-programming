#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b[3][3];
int i,j;
clrscr();
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
b[j][i]=a[i][j];
}  }
printf("Original matrix\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
printf("\nMatrix after swapping\n\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}
getch();
}