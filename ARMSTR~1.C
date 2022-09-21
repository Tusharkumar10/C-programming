#include<stdio.h>
#include<conio.h>

void main()
 {
 int num, originalNum, remainder, result = 0;
 clrscr();
 printf("Enter a integer between 1 to 999 : ");
 scanf("%d", &num);
 originalNum = num; // 153

 while (originalNum != 0) {
 // remainder contains the last digit
 remainder = originalNum % 10;  // 3,5,1

 result = result+(remainder * remainder * remainder);

 // removing last digit from the orignal number
 originalNum = originalNum/10; //15,1,0
 }

 if (result == num)
 printf("%d is an Armstrong number.", num);
 else
 printf("%d is not an Armstrong number.", num);
 getch();
}