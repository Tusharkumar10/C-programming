#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[50];
clrscr();
printf("Enter a string\n");
//scanf("%s",str);   //User
scanf("%[^\n]",str); //User name
printf(str);

/*
puts("Enter a string\n");
gets(str);
puts(str);
*/

getch();

}