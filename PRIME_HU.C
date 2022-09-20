#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int i,num,flag;

clrscr();
printf("=====================1 to 100 prime numbers are=======================\n");
for(num=2;num<=100;num++)
{
flag=0;
for(i=2;i<=sqrt(num);i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d ",num);
}
getch();
}
