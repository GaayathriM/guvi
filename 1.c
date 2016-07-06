#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
if(num>0)
printf("The number is positive");
elseif(num<0)
printf("The number is negative");
else
printf("The given number is zero");
getch();
}
