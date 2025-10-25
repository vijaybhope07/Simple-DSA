// Program to find the transpose of a matrix
import java.util.*;

public class Q48 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Taking matrix dimensions from the user
        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter number of columns: ");
        int cols = sc.nextInt();

        // Declaring the matrix with given rows and columns
        int[][] matrix = new int[rows][cols];

        // Taking matrix elements input from the user
        System.out.println("Enter elements of the matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        // Creating a new matrix for transpose with flipped dimensions
        int[][] transpose = new int[cols][rows];

        // Logic to compute transpose: swapping rows with columns
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }

        // Printing the transpose matrix
        System.out.println("Transpose of the matrix:");
        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                System.out.print(transpose[i][j] + " ");
            }
            System.out.println(); // move to next line after each row
        }

        sc.close(); // Closing scanner to avoid resource leak
    }
}
