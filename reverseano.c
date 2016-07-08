#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,rem,rev=0;
clrscr();
printf("\n enter the number");
scanf("%d",&n);
n1=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}

printf("\nthe reverse of the number is %d",rev);

getch();
}
