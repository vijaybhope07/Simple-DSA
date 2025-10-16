import java.util.Scanner;

public class PowerCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the base number: ");
        double base = sc.nextDouble();

        System.out.print("Enter the exponent: ");
        int exponent = sc.nextInt();

        double result = 1;

        int absExponent = Math.abs(exponent);

        for (int i = 1; i <= absExponent; i++) {
            result *= base;
        }

        
        if (exponent < 0) {
            result = 1 / result;
        }

        System.out.println(base + " raised to the power " + exponent + " is: " + result);
        sc.close();
    }
}
