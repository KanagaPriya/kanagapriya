#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
clrscr();
printf("\n enter the value of n");;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum+=i;
}
printf("\n sum of the n number is %d",sum);
getch();
}
