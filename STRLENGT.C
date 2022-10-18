#include<stdio.h>
#include<conio.h>
void strlength();
char str[50];int i;
void main()
{

clrscr();
printf("Enter a string\n");
//scanf("%s",str);   //User
scanf("%[^\n]",str); //User name
printf("You have entered the string = %s",str);
strlength();
getch();

}
void strlength()
{
  for(i=0;str[i]!='\0';i++);
  printf("\nThe length of the string = %d",i);
}