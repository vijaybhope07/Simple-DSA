import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class CharFrequency {
    public static void findCharacterFrequency(String inputString){
        if(inputString.isEmpty()){
            System.out.println("The input string is empty.");
            return;
        }
        Map<Character, Integer> freq = new HashMap<>();
        char[] characters = inputString.toCharArray();
        for(char ch : characters){
            int count = freq.getOrDefault(ch, 0);
            freq.put(ch, count + 1);
        }
        System.out.println("\nCharacter frequencies in the string '" + inputString + "':");
        for(Map.Entry<Character, Integer> entry : freq.entrySet()){
            System.out.println("'" + entry.getKey() + "' : " + entry.getValue());
        }
    }

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String userInput = scanner.nextLine();
        findCharacterFrequency(userInput);

        scanner.close();
    }
}
