#include<stdio.h>
#include<conio.h>
void main()
{
int num,r,q,sum=0;
clrscr();
printf("Enter a digit \n");  //1234
scanf("%d",&num);
while(num!=0)
{
r=num%10; //4
num=num/10; //123
sum=sum+r;  //4
}
printf("Sum of digits = %d",sum);
getch();

}
