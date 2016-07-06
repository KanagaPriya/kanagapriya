#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n enter the character");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
printf("\n %c ia an alphabhet",ch);
else
printf("\n %c is not an alphabhet",ch);
getch();
}
