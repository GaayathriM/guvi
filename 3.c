#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter a character:");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
printf("Character is a vowel");
else
printf("Character is a consonant");
getch();
}
