/* Code to write a java program to throw an exception for an employee details.
If an employee name is a number, a name exception must be thrown.
If an employee age is greater than 50, an age exception must be thrown.
Or else an object must be created for the entered employee details.
*/

import java.io.*;
import java.util.*;
class Numx
{
    public static void main(String args[])
    {
        String name;
        int age;
        System.out.println("-----ENTER EMPLOYEE DETAILS-----");
        System.out.println("Enter Name and Age:");
        Scanner in=new Scanner(System.in);

        try
        {
            if(!(in.nextLine().matches("[a-zA-Z]+")))
            {
                throw new IOException();
                
            }

            age=in.nextInt();
            if(age>50)
            {
                System.out.println("Age greater than 50 Exception");
                throw new Exception();
            }

            Numx x=new Numx();
            System.out.println("-----Object Created-----");
        }

        catch(Exception e)
        {
            System.out.println("Exception");
        }
    }
}
