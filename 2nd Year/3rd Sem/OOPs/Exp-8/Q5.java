/* Code to write a Java code that converts int to Integer, converts Integer to String, 
converts String to int, converts int to String, converts String to Integer converts 
Integer to int.   */

import java.util.*;

public class Exp8_5 {
    public static void main(String[] args) {

        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = Sc.nextInt();
        Integer obj = Integer.valueOf(n);
        System.out.println("int=" + n + " Integer=" + obj);
        String s = Integer.toString(obj);
        System.out.println("Integer=" + obj + " String=" + s);
        int t = Integer.parseInt(s);
        System.out.println("String=" + s + " int=" + t);
        String str1 = Integer.toString(n);
        System.out.println("int=" + n + " String=" + s);
        Integer m = Integer.parseInt(s);
        System.out.println("String=" + s + " Integer=" + m);
        Int a = m;
        System.out.println("Integer=" + m + " int=" + a);
    }
}
