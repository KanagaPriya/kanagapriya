#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,i;
clrscr();
printf("\n enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact*=i;
}
printf("\n factorial of the number is %d",fact);

getch();
}
