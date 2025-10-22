import java.util.Scanner;

public class Q41 {
    public static String reverse(String sentence) {
        if (sentence.length() <= 1) {
            return sentence;
        }

        return reverse(sentence.substring(1)) + sentence.charAt(0);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a sentence: ");
        String sentence = sc.nextLine();

        String reversed = reverse(sentence);
        System.out.println("Reversed sentence: " + reversed);

        sc.close();
    }
}
