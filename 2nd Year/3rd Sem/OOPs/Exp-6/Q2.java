/* Write a program to make a package Balance. This has an Account class with 
Display_Balance method. Import Balance package in another program to access 
Display_Balance method of Account class. */

//Package 1:
package Balance; 
public class Account {  
	public void Display_Balance(int a)  {  
		System.out.println("Tisha Jain - 500096959");  
		System.out.println("The account balance is "+a); 
	 } 
} 

//Package 2:(Main)
package Sub;
import Balance.*; 
public class Main {  
	public static void main(String args[])  {  
		Balance.Account obj1=new Balance.Account();  
		obj1.Display_Balance(500000);
	}
}
