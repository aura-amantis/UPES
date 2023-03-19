/* Write a Java program to show that private member of a super class cannot be accessed from derived classes. 
*/

class Parent 
{
    private void display() 
    {
        System.out.println("Private class is envoked.");
    }
}


class child extends Parent 
{
    void print() 
    {
        super.display();
    }
}


public class Exp4_1error 
{
    public static void main(String[] args) 
    {
        child obj = new child();
        obj.print();
    }
}
