#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int i,num,flag=0;
clrscr();
printf("Enter a number to check whether is prime or not\n");
scanf("%d",&num);
for(i=2;i<=sqrt(num);i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==1)
printf("%d is not a prime number\n",num);
else
printf("%d is a prime number\n",num);
getch();
}
