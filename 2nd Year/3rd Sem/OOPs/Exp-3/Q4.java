/* Code to write a program to find the sum of all integers greater than 40 and less 
than 250 that are divisible by 5.  */

import java.util.*;

public class Exp3_4 {
	public static void main(String args[]) {
		Scanner Sc = new Scanner(System.in);
		int sum = 0;
		int lower, upper;
		System.out.println("Enter the upper and lower limit: ");
		lower = Sc.nextInt();
		upper = Sc.nextInt();
		int n;
		System.out.println("Enter the number by which all the numbers can be divisible: ");
		n = Sc.nextInt();
		for (int i = 0; i < upper; i++) {
			if ((i % n) == 0) {
				sum = sum + i;
			}
		}
		System.out.println("Sum= " + sum);
	}
}
