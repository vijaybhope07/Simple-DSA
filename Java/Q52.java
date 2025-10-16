import java.util.ArrayList;
import java.util.Scanner;

public class LargestNumberDynamicAllocation {

    // Method to find the largest number in a dynamically allocated list (ArrayList)
    public static int findLargestNumber(ArrayList<Integer> numbers) {
        // Check if the list is empty
        if (numbers.isEmpty()) {
            throw new IllegalArgumentException("The list cannot be empty");
        }
        
        int largest = numbers.get(0); // Assume the first number is the largest initially
        
        // Iterate through the list to find the largest number
        for (int num : numbers) {
            if (num > largest) {
                largest = num; // Update the largest number
            }
        }
        
        return largest;
    }

    public static void main(String[] args) {
        // Create a Scanner object for user input
        Scanner scanner = new Scanner(System.in);
        
        // Create a dynamic array (ArrayList) to store numbers
        ArrayList<Integer> numbers = new ArrayList<>();
        
        System.out.println("Enter the number of elements:");
        int n = scanner.nextInt();
        
        System.out.println("Enter the numbers:");
        for (int i = 0; i < n; i++) {
            numbers.add(scanner.nextInt()); // Dynamically add elements to the list
        }
        
        try {
            // Find the largest number using the method
            int largest = findLargestNumber(numbers);
            System.out.println("The largest number is: " + largest);
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }
        
        // Close the scanner object
        scanner.close();
    }
}
