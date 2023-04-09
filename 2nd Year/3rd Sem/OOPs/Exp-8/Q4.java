/* Code to write a program in Java to create a String object. Initialize this object 
with your name. Find the length of your name using the appropriate String method. Find 
whether the character ‘a’ is in your name or not; if yes find the number of times ‘a’ 
appears in your name. Print locations of occurrences of ‘a’ .Try the same for different 
String objects.  */

import java.util.*;

public class Exp8_4 {
    String name;

    Exp8_4(String n) {
        name = n;
    }

    void display() {
        int c = 0;
        for (int i = 0; i < name.length(); i++)
            if (name.charAt(i) == 'A' || name.charAt(i) == 'a') {
                c++;
                System.out.println("Number of occurance :" + c);
                System.out.println("Position :" + (i + 1));
            }
        if (c == 0)
            System.out.println("There is no 'a' available in the string.");
    }

    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter a name:");
        String s = Sc.nextLine();
        Exp8_4 obj = new Exp8_4(s);
        obj.display();
    }
}
