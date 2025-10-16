import java.util.Scanner;

public class OctalDecimal {
    static int octalToDecimal(int octal) {
        int decimal = 0, i = 0;
        while (octal != 0) {
            int rem = octal % 10;
            octal /= 10;
            decimal += rem * Math.pow(8, i);
            i++;
        }
        return decimal;
    }

    static String decimalToOctal(int decimal) {
        return Integer.toOctalString(decimal);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter octal number: ");
        int octal = sc.nextInt();
        System.out.println("Decimal: " + octalToDecimal(octal));

        System.out.print("Enter decimal number: ");
        int decimal = sc.nextInt();
        System.out.println("Octal: " + decimalToOctal(decimal));
        sc.close();
    }
}
