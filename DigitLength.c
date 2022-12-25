#include<stdio.h>
#include<conio.h>


int length(int);

void main()
{
int num,len;
printf("Enter a number to find how many digits in a number\n");
scanf("%d",&num);
len=length(num);
printf("Digits in the number = %d\n",len);
}

int length(int num)
{
int length,i;
for(i=0;num!=0;i++)
{
num/=10;
}
return i;
}


