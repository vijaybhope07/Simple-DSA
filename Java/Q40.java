import java.util.Scanner;

public class BinaryOctal {
    static String binaryToOctal(String binary) {
        int decimal = Integer.parseInt(binary, 2);
        return Integer.toOctalString(decimal);
    }

    static String octalToBinary(String octal) {
        int decimal = Integer.parseInt(octal, 8);
        return Integer.toBinaryString(decimal);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter binary number: ");
        String binary = sc.next();
        System.out.println("Octal: " + binaryToOctal(binary));

        System.out.print("Enter octal number: ");
        String octal = sc.next();
        System.out.println("Binary: " + octalToBinary(octal));
        sc.close();
    }
}
