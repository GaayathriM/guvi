#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("a is greater");
elseif(b>a && b>c)
printf("b is greater");
else
printf("c is greater");
getch();
}
