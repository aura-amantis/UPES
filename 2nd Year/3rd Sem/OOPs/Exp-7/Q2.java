/* Write a Java program to enable the user to handle any chance of divide by zero exception. */

class DIVIDEBYZERO {
   public static void main (String args[]) {
      int num1 = 15, num2 = 0, result = 0;
      try{
          result = num1/num2;
          System.out.println("The result is" +result);
      } 
      catch (ArithmeticException e) {
         System.out.println ("Can't be divided by Zero " + e);
      }
   }
}
