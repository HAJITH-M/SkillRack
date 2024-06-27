import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the input string S
        String S = scanner.nextLine();

        // Convert string to character array for sorting
        char[] charArray = S.toCharArray();

        // Sort the character array in descending order
        Arrays.sort(charArray);
        StringBuilder sortedString = new StringBuilder(new String(charArray)).reverse();

        // Remove consecutive duplicate characters
        StringBuilder result = new StringBuilder();
        char lastChar = '\0'; // Initialize lastChar with a default value
        for (int i = 0; i < sortedString.length(); i++) {
            char currentChar = sortedString.charAt(i);
            if (currentChar != lastChar) {
                result.append(currentChar);
                lastChar = currentChar;
            }
        }

        // Print the sorted and deduplicated string
        System.out.println(result.toString());
    }
}
