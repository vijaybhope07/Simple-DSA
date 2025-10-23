import java.util.Scanner;

public class Q55{

    // Method 1
    public static String removeUsingRegex(String input) {
        return input.replaceAll("[^a-zA-Z]", "");
    }

    // Method 2
    public static String removeWithoutRegex(String input) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                result.append(ch);
            }
        }
        return result.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = sc.nextLine();

        String result = removeUsingRegex(input);

        System.out.println("String after removing non-alphabet characters: " + result);

        sc.close();
    }
}

