#include<stdio.h>
#include<conio.h>
void main()
{
long int num,r,q,sum=0;
clrscr();
printf("Enter a digit \n");  //1234
scanf("%ld",&num);
while(num!=0)
{
r=num%10; //4
num=num/10; //123
sum=sum*10+r;  //4
}
printf("Reverse digits = %ld",sum);
getch();

}
