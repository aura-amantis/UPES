/* Code to write a program to create an interface StackInterface having methods push (), 
pop () and display (). StackClass implements StackInterface. Class StackClass contains the 
main method which is having a switch case for selecting the particular operation of the stack.  */


import java.io.*;
import java.util.Scanner;
class stack {
    static int ch;
    int element, maxsize, top;
    int[] st;
    public stack() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter stack size");
        maxsize = sc.nextInt();
        st = new int[maxsize];
        top = -1;
    }
    public void push(int element) {
        if(top ==maxsize-1) {
            System.out.println("\n-----------Overflow------------\n");
        } else {
            try {
                st[++top] = element;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e);
            }
        }
    }
    public int pop() {
        if (top == -1) {
            System.out.println("\n----------UnderFlow-----------\n");
            return (-1);
        }
        else {
            System.out.printf("Popped element is " +(st[top--]));
            return 0;
        }
    }

    public void display(int[] st, int max_size) {
        int i;
        System.out.println("Stack Elements:");
        for (i = 0; i <= max_size; i++)
            System.out.println(st[i]);
        new myStack();
    }
}
 class myStack {
    static int ch;

    public static void main(String[] args) {
        stack obj = new stack();
        while (true) {
            System.out.println("\nEnter your choice\n1.PUSH\n2.POP\n3.Display\n4..EXIT");
            Scanner integer = new Scanner(System.in);
            ch = integer.nextInt();
            switch (ch) {
                case 1:
                    System.out.println("Enter Element");
                    obj.element = integer.nextInt();
                    obj.push(obj.element);
                    break;
                case 2:
                    obj.pop();
                    break;
                case 3:
                    obj.display(obj.st, obj.top);
                    break;
                case 4:
                    System.exit(0);
                default:
                    System.out.println("Wrong option");
            }
        }
    }
}
