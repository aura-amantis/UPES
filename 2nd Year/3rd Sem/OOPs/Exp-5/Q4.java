/* Code to write a program to create an Interface having two methods division and 
modules. Create a class, which overrides these methods. */

interface course
{
    void division(int a);
    void modules(int b);
}
class stud implements course
{
    String name;
    int div,mod;
    void name(String n)
    { name=n; }
    public void division(int a)
    { div=a; }
    public void modules(int b)
    { mod=b; }
    void disp()
    {
        System.out.println("Name :"+name);
        System.out.println("Division :"+div);
        System.out.println("Modules :"+mod);
    }
}

class s05_03
{
    public static void main(String args[])
    { stud s=new stud();
        s.name("Sana");
        s.division(7);
        s.modules(21);
        s.disp();
    }
}
