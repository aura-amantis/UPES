//Code to implement a command line calculator.

public class Cal {
   public static void add(int n, int m) {
       int result = n + m;
       System.out.println(n + " + " + m + " = " + result); }
   public static void subtract(int n, int m) {
       int result = n - m;
       System.out.println(n + " - " + m + " = " + result);
   }
   public static void multiply(int n, int m) {
       int result = n * m;
       System.out.println(n + " * " + m + " = " + result);
   }
   public static void divide(int n, int m) {
       int result = n / m;
       System.out.println(n + " / " + m + " = " + result);
   }

   public static void main(String args[]) {
       int n = Integer.parseInt(args[0]);
       int m = Integer.parseInt(args[1]);
       add(n,m);
       subtract(n,m);
       multiply(n,m);
       divide(n,m);
   }
}
