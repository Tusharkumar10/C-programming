#include<stdio.h>
#include<conio.h>
void PrintAt(int,int);
void main()
{
int i=100,j=100;
clrscr();
//gotoxy(28,13);   First method
for(i=0;i<18;i++)//Second method
{ for(j=0;j<55;j++)
{
printf(" ");
}
}
//PrintAt(13,30); Third method

printf("Welcome Mr.Tushar ");
getch();
}
void PrintAt(int x , int y )
{
printf("\033[%d;%dH",x,y);
}