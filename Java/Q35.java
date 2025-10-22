import java.util.Scanner;

public class SumOfNaturalNumbers {

    // Recursive function to find the sum of natural numbers
    static int sum(int n) {
        if (n == 0)
            return 0; 
        else
            return n + sum(n - 1); 
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input from user
        System.out.print("Enter a positive integer: ");
        int number = scanner.nextInt();

        if (number < 0) {
            System.out.println("Please enter a positive number!");
        } else {
            int result = sum(number);
            System.out.println("Sum of natural numbers up to " + number + " = " + result);
        }

        scanner.close();
    }
}
