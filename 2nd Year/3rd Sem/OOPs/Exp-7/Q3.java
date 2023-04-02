/* Create an exception class, which throws an exception if operand is nonnumeric in 
calculating modules. (Use command line arguments).  */

class NonNum extends Exception{
    NonNum(){ 
	    super("the value is non numeric \n"); 
    }
}
class Ques3{
    public static void main(String ar[])
    {
        int a,b,c=0;
        try{
            a=Integer.parseInt(ar[0]);
            throw new NonNum();
        }
        catch(NumberFormatException e){
            System.out.println(e);
        }
        catch(NonNum e){ 
            System.out.println(e);
        }
    }
}
