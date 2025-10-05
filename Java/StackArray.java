import java.util.Scanner;

class Stack {
    private int[] arr;
    private int top;
    private int capacity;

    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    public void push(int x) {
        if (top == capacity - 1) {
            System.out.println("Stack Overflow!");
            return;
        }
        arr[++top] = x;
    }

    public int pop() {
        if (top == -1) {
            System.out.println("Stack Underflow!");
            return -1;
        }
        return arr[top--];
    }

    public void display() {
        if (top == -1) {
            System.out.println("Stack is empty!");
            return;
        }
        System.out.print("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

public class StackArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack stack = new Stack(5);

        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.display();

        System.out.println("Popped element: " + stack.pop());
        stack.display();
        sc.close();
    }
}
