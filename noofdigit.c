#include<stdio.h>
#include<conio.h>
void main()
{

    int count=0,n;
    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n>0)
    {
	n=n/10;
	count++;
    }

    printf("Number of digits is %d",count);
    getch();
}
