/* Code to write a program to create interface A, in this interface we have two 
method meth1 and meth2. Implements this interface in another class named MyClass. */

import java.util.Scanner;
interface A
{
    void meth1();
    void meth2();
}
class MyClass implements A
{ Scanner sc= new Scanner(System.in);
    public void meth1 ( )
    {
        System.out.println("Implement Method1(addition)");
        System.out.println("Enter first no. for addition: ");
        int a= sc.nextInt();
        System.out.println("Enter second no. for addition");
           int b= sc.nextInt();
        System.out.println("The addition of first and second no. is "+(a+b) );
    }
    public void meth2()
    {
        System.out.println("Implement Method2(subtraction:)");
        System.out.println("Enter first no. for subtraction: ");
        int a= sc.nextInt();
        System.out.println("Enter second no. for subtraction: ");
        int b= sc.nextInt();
        System.out.println("The addition of first and second no. is "+(a-b) );
    }
}
class IFExtend
{
    public static void main(String arg[])
    {
        MyClass ob = new MyClass();
        ob.meth1();
        ob.meth2();
    } 
}
