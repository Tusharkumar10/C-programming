#include<stdio.h>
#include<conio.h>
#include<string.h>
//void palindrome();
char str[50],str2[50];int i,t,f=0;
void main()
{
clrscr();
printf("Enter a string\n");
//scanf("%s",str);   //User
scanf("%[^\n]",str); //User name
printf("You have entered the string = %s",str);
strcpy(str2,str);
strlwr(str2);

for(i=0;str2[i]!='\0';i++);
t=i;

for(i=0;i<=t/2;i++,t--)
{
if(str2[i]!=str2[t-1])
{
printf("\nIt is not palindrome\n");
f=1;
break;
}
}
if(f==0)
printf("\n%s is a palindrome",str);

//palindrome();
getch();

}
//void palindrome()
//{}