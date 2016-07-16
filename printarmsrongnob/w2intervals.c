#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,sum=0,r,min,max,i;
clrscr();
printf("\n enter the minimum and maximum number");
scanf("%d%d",&min,&max);
min=min+1;
for(i=min;i<max;i++)
{
n1=i;
n=n1;
while(n>0)
{
r=n%10;
sum+=r*r*r;
n=n/10;
}
if(n1==sum)
{
printf("\n the number %d is an armstrong number",n1);
}
else
{
printf("\n the number is not an armstrong number");
}
}
getch();
}
