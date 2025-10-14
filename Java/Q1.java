import java.util.Scanner; 

public class MultiplyFloat {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first number: ");
        float num1 = input.nextFloat(); 
        System.out.print("Enter second number: ");
        float num2 = input.nextFloat(); 
        float product = num1 * num2;
        System.out.println("The product is: " + product); 
    }
}