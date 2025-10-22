import java.util.Arrays;

public class LexicographicalSort {
    public static void main(String[] args) {
        String[] words = {"banana", "apple", "cherry", "grape"};

        System.out.println("Original order:");
        for (String word : words) {
            System.out.print(word + " ");
        }
        System.out.println();

        // Sort the array in lexicographical order
        Arrays.sort(words);

        System.out.println("Lexicographical order:");
        for (String word : words) {
            System.out.print(word + " ");
        }
        System.out.println();
    }
}
