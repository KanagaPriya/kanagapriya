#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter three  numbers");
scanf("\n%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("\n %d  is greatest",a);
else if(b>c&&b>a)
printf("\n %d is greatest",b);
else
printf("\n %d is greatest",c);
getch();
}
