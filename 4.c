#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter a character:");
scanf("%c",&c);
if(isalpha(c))
printf("Alphabet");
else
printf("Not an alphabet");
getch();
}
