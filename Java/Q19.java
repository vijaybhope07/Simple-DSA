import java.util.Scanner;

public class Q19 {
    public static void main(String[] args) {
        
        // Create a Scanner object to read user input
        Scanner scanner = new Scanner(System.in);
        
        // Prompt the user to enter a number
        System.out.print("Enter a number to generate its multiplication table: ");
        
        // Read the integer input from the user
        int number = scanner.nextInt();
        
        System.out.println("\n--- Multiplication Table for " + number + " ---");
        
        // Use a for loop to iterate from 1 to 15
        for (int i = 1; i <= 15; i++) {
            // Calculate and print each line of the table
            System.out.println(number + " x " + i + " = " + (number * i));
        }
        
        // Close the scanner to prevent resource leaks
        scanner.close();
    }
}