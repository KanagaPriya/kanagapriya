#include<stdio.h>
#include<conio.h>
{
int n,n1,sum=0,r;
clrscr();
printf("\n enter the number ");
scanf("%d",&n);
n1=n;
while(n>0)
{
r=n%10;
sum+=r*r*r;
n=n/10;
}
if(n1==sum)
{
printf("\n the number %d is an armstrong number");
}
else
{
printf("\n the number is not an armstrong number");
}
getch();
}
