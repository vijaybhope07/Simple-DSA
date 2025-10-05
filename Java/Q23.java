import java.util.*;

public class DisplayAlphabets {

    public static void main(String[] args) {
        System.out.println("Uppercase Alphabets (A-Z):");
        for (char ch = 'A'; ch <= 'Z'; ch++) {
            System.out.print(ch + " ");
        }
        System.out.println("\n"); // New line for separation

        System.out.println("Lowercase Alphabets (a-z):");
        for (char ch = 'a'; ch <= 'z'; ch++) {
            System.out.print(ch + " ");
        }
        System.out.println(); // New line at the end
    }
}
