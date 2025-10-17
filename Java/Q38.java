import java.util.Scanner;

public class BinaryDecimal {
    static int binaryToDecimal(long binary) {
        int decimal = 0, i = 0;
        while (binary != 0) {
            long rem = binary % 10;
            binary /= 10;
            decimal += rem * Math.pow(2, i);
            i++;
        }
        return decimal;
    }

    static String decimalToBinary(int decimal) {
        return Integer.toBinaryString(decimal);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter binary number: ");
        long binary = sc.nextLong();
        System.out.println("Decimal: " + binaryToDecimal(binary));

        System.out.print("Enter decimal number: ");
        int decimal = sc.nextInt();
        System.out.println("Binary: " + decimalToBinary(decimal));
        sc.close();
    }
}
