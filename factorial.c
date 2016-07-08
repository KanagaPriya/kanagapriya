#include<stdio.h>
#include<conio.h>
int fact(int);             
void main()
{
  int num,f;
  clrscr();
  printf("\nEnter a number: ");
  scanf("%d",&num);
  f=fact(num);              
  printf("\nFactorial of %d is: %d",num,f);
  getch();

}

int fact(int n){
   if(n==0||n==1)
       return 1;
   else
       return(n*fact(n-1));       
 }
