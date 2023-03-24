/* Code to write a program to create interface named test. In this interface the member function is square. 
Implement this interface in arithmetic class. Create one new class called ToTestInt. In this class use the object of arithmetic class.
*/

package com.company;
import java.util.Scanner;
interface Test
{
    public int square(int a);
}
class arithmetic implements Test
{
int s;
    public int square(int b)
    { Scanner sc= new Scanner(System.in);
        System.out.print("Enter any number: ");
         s= sc.nextInt();
        System.out.println("Inside arithmetic class – implemented method square");
        System.out.println("Square of " +s+ " is "+s*s);
        return s;
    }
    void armeth()
    {
        System.out.println("Inside method of class Arithmetic");
    }
}
class ToTestInt
{
    public static void main(String a[])
    {
        System.out.println("calling from ToTestInt class main method");
        Test t = new arithmetic();
        System.out.println("==============================");
        System.out.println("created object of test interface – reference Arithmetic class");
        System.out.println("Hence Arithmetic class method square called");
        System.out.println("This object cannot call armeth method of Arithmetic class");
        System.out.println("=================================");
        t.square(10);
        System.out.println("=================================");
    }
}
