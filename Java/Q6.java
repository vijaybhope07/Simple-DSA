import java.util.Scanner;

public class Main{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the dividend: ");
        int dividend = sc.nextInt();
        System.out.print("Enter the divisor: ");
        int divisor = sc.nextInt();

        System.out.println("Quotient = " + (dividend / divisor));
        System.out.println("Remainder = " + (dividend % divisor));

        sc.close();
    }
}