/* Code to write a program to input a number of a month (1 - 12) and print its equivalent name 
of the month. ( e.g 1 to Jan, 2 to Feb. 12 to Dec).  */

import java.util.*;
public class Exp3_3
{
	public static void main(String args[])
	{
		Scanner Sc=new Scanner(System.in);
		int n;
		System.out.println("Enter the number:");
		n=Sc.nextInt();
		switch(n)
		{
		case 1:
		{
			System.out.println("The month is January");
		}
		break;
		case 2:
		{
			System.out.println("The month is February");
		}
		break;
		case 3:
		{
			System.out.println("The month is March");
		}
		break;
		case 4:
		{
			System.out.println("The month is April");
		}
		break;
		case 5:
		{
			System.out.println("The month is May");
		}
		break;
		case 6:
		{
			System.out.println("The month is June");
		}
		break;
		case 7:
		{
			System.out.println("The month is July");
		}
		break;
		case 8:
		{
			System.out.println("The month is August");
		}
		break;
		case 9:
		{
			System.out.println("The month is September");
		}
		break;
		case 10:
		{
			System.out.println("The month is October");
		}
		case 11:
		{
			System.out.println("The month is November");
		}
		break;
		case 12:
		{
			System.out.println("The month is December");
		}
		break;
		default:
		{
			System.out.println("Enter the number between 1 to 12");
		}
		}
	}
}
