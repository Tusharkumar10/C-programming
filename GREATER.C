#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers\n");
scanf("%d\n %d\n %d",&a,&b,&c);
if((a>b)&&(a>c))
printf("%d is greater \n",a);
else if(b>c)
printf("%d is greater \n",b);
else
printf("%d is greater \n",c);
getch();

}
