#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i,n;
clrscr();
a=0;
b=1;
printf("Enter the value of n");
scanf("%d",&n);
printf("\nThe series is");
printf("\n%d\n%d",a,b);
for(i= 3;i<=n;i++)
{
 c=a+b;
 printf("\n%d",c);
 a=b;
 b=c;
}
getch();
}
