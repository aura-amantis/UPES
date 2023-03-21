/* Code to write a class Worker and derive classes DailyWorker and SalariedWorker 
from it. Every worker has a name and a salary rate. Write method ComPay (int hours) 
to compute the week pay of every worker. A Daily Worker is paid on the basis of the 
number of days he/she works. The Salaried Worker gets paid the wage for 40 hours a 
week no matter what the actual hours are. Test this program to calculate the pay of 
workers. You are expected to use the concept of polymorphism to write this program. */

class Worker 
{
    String name;


    Worker(String n) 
    {
        name = n;
    }


    void show() 
    {
        System.out.println("Employee name : " + name);
    }
}

class DailyWorker extends Worker 
{
    int pay;


    DailyWorker(String n, int r) 
    {
        super(n);
        pay = r;
    }


    void ComPay(int h) 
    {
        super.show();
        System.out.println("Salary : " + pay * h);
    }
}

class SalariedWorker extends Worker 
{
    int pay;


    SalariedWorker(String n, int r) 
    {
        super(n);
        pay = r;
    }


    int hour = 40;


    void ComPay() 
    {
        super.show();
        System.out.println("Salary : " + pay * hour);
    }
}

public class Exp4_3 
{
    public static void main(String args[]) 
    {
        DailyWorker d = new DailyWorker("Arjun", 100);
        SalariedWorker s = new SalariedWorker("Unnati", 150);
        d.ComPay(45);
        s.ComPay();
    }
}
