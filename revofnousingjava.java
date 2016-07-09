package sample;
import java.util.*;

public class rev {
     void method(int number){
         int rev1 = 0,rem;
        while(number>0){
        	rem=number%10;
        	rev1 = rev1*10+rem;
            number = number/10;
        }
        System.out.println("Result: "+rev1);
    }
     public static void main(String args[]){
    	
        rev r = new rev();
        Scanner sc= new Scanner(System.in);
        System.out.println("\n Enter a number:");
        int num =sc.nextInt();
        r.method(num);
    }
}
