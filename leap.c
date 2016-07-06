#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter the year");
scanf("%d",&n);
if(n%4==0)
printf("\n the year is leap year");
else
printf("\n the year is not a leap year");
getch();
}
