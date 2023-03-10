/* Code to write a program to find the largest of 3 numbers. */

import java.util.*;
public class LargestNumber {
   public static void main(String args[]){
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter the first number:");
       float a = sc.nextFloat();
       System.out.println("Enter the second number:");
       float b = sc.nextFloat();
       System.out.println("Enter the third number:");
       float c = sc.nextFloat();

       //float temp=a>b?a:b;
       //float largest=c>temp?c:temp;
       //System.out.println("The largest number is: "+largest);
       // OR

       if(a >= b && a >= c)
           System.out.println(a + " is the largest number.");

       else if (b >= a && b >= c)
           System.out.println(b + " is the largest number.");

       else
           System.out.println(c + " is the largest number.");
   }
}
