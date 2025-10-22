import java.util.*;

public class CyclicSwap {

    // Wrapper class to hold an integer, allowing its value to be modified
    static class IntWrapper {
        public int value;

        public IntWrapper(int value) {
            this.value = value;
        }
    }

    public static void cyclicSwap(IntWrapper a, IntWrapper b, IntWrapper c) {
        int temp = a.value; // Store value of a
        a.value = c.value;  // a gets value of c
        c.value = b.value;  // c gets value of b
        b.value = temp;     // b gets original value of a
    }

    public static void main(String[] args) {
        IntWrapper num1 = new IntWrapper(1);
        IntWrapper num2 = new IntWrapper(2);
        IntWrapper num3 = new IntWrapper(3);

        System.out.println("Before swapping:");
        System.out.println("num1 = " + num1.value);
        System.out.println("num2 = " + num2.value);
        System.out.println("num3 = " + num3.value);

        cyclicSwap(num1, num2, num3);

        System.out.println("\nAfter cyclic swapping:");
        System.out.println("num1 = " + num1.value); // Expected: 3
        System.out.println("num2 = " + num2.value); // Expected: 1
        System.out.println("num3 = " + num3.value); // Expected: 2
    }
}
