import java.util.Scanner;

public class ReverseNumber {
    public static long reverse(long number) {
        long reversed = 0;
        while (number != 0) {
            long digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
        }
        
        return reversed;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number to reverse: ");
        long num = sc.nextLong(); 
        long reversedNum = reverse(num);
        System.out.println("Reversed number is: " + reversedNum);

        sc.close();
    }
}