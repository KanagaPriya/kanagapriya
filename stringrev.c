#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[25];
clrscr();
printf("\n enter the string  : ");
scanf("%s",s);
printf("the reverse of the strins is : %s",strrev(s));
getch();
}
