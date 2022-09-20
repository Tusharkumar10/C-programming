#include<stdio.h>
#include<conio.h>
void main()
{
int num,p,result=1,i;
clrscr();
printf("Enter a base number \n");  //1234
scanf("%d",&num);
printf("Enter the power of base number\n");
scanf("%d",&p);
for(i=0; i<p; i++)
{
result=result*num;
}
printf("Result = %d",result);
getch();

}