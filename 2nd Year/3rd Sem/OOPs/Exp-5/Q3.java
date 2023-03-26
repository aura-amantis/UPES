/* Code to write a program in Java to show the usefulness of Interfaces as a place to 
keep constant value of the program. */

interface area
{
    static final float pi=3.142f;
    float compute(float x,float y);
}
class rectangle implements area
{
    public float compute(float x,float y)
    {return(x*y);}
}
class circle implements area
{
    public float compute(float x,float y)
    {return(pi*x*x);}
}
class s05_02
{
    public static void main(String args[])
    {
        rectangle rect=new rectangle();
        circle cr=new circle();
        area ar;
        ar=rect;
        System.out.println("Area of the rectangle= "+ar.compute(53,31));
        ar=cr;
        System.out.println("Area of the circle= "+ar.compute(21,0));
    }
}
