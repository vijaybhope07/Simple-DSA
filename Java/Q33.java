import java.util.Scanner;

public class PrimeOrArmstrong {

    // Function to check if a number is prime
    static boolean isPrime(int num) {
        if (num <= 1)
            return false;

        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    // Function to check if a number is Armstrong
    static boolean isArmstrong(int num) {
        int original = num;
        int digits = String.valueOf(num).length();
        int sum = 0;

        while (num > 0) {
            int digit = num % 10;
            sum += Math.pow(digit, digits);
            num /= 10;
        }

        return sum == original;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check for Prime
        if (isPrime(number))
            System.out.println(number + " is a Prime number.");
        else
            System.out.println(number + " is NOT a Prime number.");

        // Check for Armstrong
        if (isArmstrong(number))
            System.out.println(number + " is an Armstrong number.");
        else
            System.out.println(number + " is NOT an Armstrong number.");

        scanner.close();
    }
}
