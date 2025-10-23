import java.util.Scanner;

public class Q64{

    public static String mergeAlternately(String word1, String word2) {
        StringBuilder merged = new StringBuilder();
        int i = 0, j = 0;

        while (i < word1.length() && j < word2.length()) {
            merged.append(word1.charAt(i++));
            merged.append(word2.charAt(j++));
        }

        if (i < word1.length()) {
            merged.append(word1.substring(i));
        }
        if (j < word2.length()) {
            merged.append(word2.substring(j));
        }

        return merged.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first word: ");
        String word1 = sc.nextLine();

        System.out.print("Enter second word: ");
        String word2 = sc.nextLine();

        String result = mergeAlternately(word1, word2);
        System.out.println("Merged string: " + result);

        sc.close();
    }
}

