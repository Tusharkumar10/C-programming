#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,i,n;
clrscr();
printf("Enter a number\n");
scanf("%d",&n);
printf("%d %d ",a,b);
for(i=0;i<n;i++)
{
c=a+b;
if(c<n){
printf("%d ",c);
}
else
{
break;
}
a=b;
b=c;
}
getch();
}