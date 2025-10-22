import java.util.Scanner;

public class Q43 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        double[] numbers = new double[n];
        double sum = 0;

        System.out.println("Enter " + n + " numbers:");
        for (int i = 0; i < n; i++) {
            numbers[i] = sc.nextDouble();
            sum += numbers[i];
        }

        double average = sum / n;
        System.out.println("Average = " + average);

        sc.close();
    }
}
