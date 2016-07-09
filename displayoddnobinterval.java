package sample;
import java.util.*;

public class oddno {

 oddno(int a,int b)
{
	int i;
	a++;
	System.out.println("the odd number betwwen two intervals "+a+ "and"+b+ "is");
	for(i=a;i<b;i++)
	{
		if(i%2!=0)
		{
			System.out.println(i);
		}
	}
}
public static void main(String args[])
{
Scanner	sc=new Scanner(System.in);
int c,d;
System.out.println("Enter the starting and ending number");
c=sc.nextInt();
d=sc.nextInt();
oddno ob=new oddno(c,d);

}
