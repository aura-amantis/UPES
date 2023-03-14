/* 
code to print the following pattern using loops
*
***
*****      

*/

public class Pattern {
   public static void main(String args[]){

       int row = 5;         //i --> rows , j --> columns
       for (int i = 1; i <= row; i+=2)
       {
           for(int j = 1; j <= i; j++){
               System.out.print("* ");
           }
           System.out.println();
       }
   }
}
