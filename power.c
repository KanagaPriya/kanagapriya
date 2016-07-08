#include<stdio.h>
#include<conio.h>
void main()
{
    int b,e,r=1,c;
    clrscr();
    printf("Enter a base number");
    scanf("%d", &b);
    printf("Enter an exponent");
    scanf("%d", &e);
    c=e;

    while (e!= 0)
    {
	r=r*b;
	--e;
    }

    printf("the power of %d base %d is %d",b,c,r);

    getch();
}
