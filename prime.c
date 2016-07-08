#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,n1;
clrscr();
printf("\n enter the number to find prime or not");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i== 0)
{
n1=0;
break;
}
}
if(n1!=0)
printf("\n the number is prime number");
else
printf("\n the number is not a prime number");
getch();
}
