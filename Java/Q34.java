import java.util.Scanner;

public class SumOfTwoPrimes {

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

    // Function to check if a number can be expressed as sum of two primes
    static void checkSumOfTwoPrimes(int number) {
        boolean found = false;
        System.out.println("Checking if " + number + " can be expressed as the sum of two prime numbers...");

        for (int i = 2; i <= number / 2; i++) {
            int complement = number - i;

            if (isPrime(i) && isPrime(complement)) {
                System.out.println(number + " = " + i + " + " + complement);
                found = true;
            }
        }

        if (!found) {
            System.out.println(number + " cannot be expressed as the sum of two prime numbers.");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input from user
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check and display result
        checkSumOfTwoPrimes(number);

        scanner.close();
    }
}
