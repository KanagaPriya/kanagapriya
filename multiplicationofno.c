#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,n1,n2;
clrscr();
printf("\n enter the multilication table of the no");
scanf("%d",&n);
printf("\nenter the no upto which the table to be displayed");
scanf("%d",&n2);

for(i=1;i<=n2;i++)
{
n1=n*i;
printf("\n%d*%d= %d",n,i,n1);
}
getch();
}
