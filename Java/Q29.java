import java.util.Scanner;

public class ArmstrongNumberChecker {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number to check: ");
        int num = scanner.nextInt();
        scanner.close();

        if (isArmstrong(num)) {
            System.out.println(num + " is an Armstrong number.");
        } else {
            System.out.println(num + " is not an Armstrong number.");
        }
    }

    // Function to check if a number is an Armstrong number
    public static boolean isArmstrong(int number) {
        int originalNumber = number;
        int sumOfPowers = 0;
        int numberOfDigits = 0;

        // Count the number of digits
        int temp = number;
        while (temp != 0) {
            temp /= 10;
            numberOfDigits++;
        }

        // Calculate the sum of digits raised to the power of the number of digits
        temp = number; // Reset temp to the original number
        while (temp != 0) {
            int digit = temp % 10;
            sumOfPowers += Math.pow(digit, numberOfDigits);
            temp /= 10;
        }

        // Check if the sum is equal to the original number
        return sumOfPowers == originalNumber;
    }
}
