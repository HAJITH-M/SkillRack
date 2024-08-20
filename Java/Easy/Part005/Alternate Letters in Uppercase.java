import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the input string
        String input = scanner.nextLine();
        
        // Split the string into words
        String[] words = input.split(" ");
        
        // StringBuilder to build the final result
        StringBuilder result = new StringBuilder();
        
        for (String word : words) {
            StringBuilder transformedWord = new StringBuilder();
            
            // Process each character in the word
            for (int i = 0; i < word.length(); i++) {
                char ch = word.charAt(i);
                if (i % 2 == 0) {
                    // Odd position (1-based), but 0-based index i is even
                    transformedWord.append(Character.toUpperCase(ch));
                } else {
                    // Even position (1-based), but 0-based index i is odd
                    transformedWord.append(Character.toLowerCase(ch));
                }
            }
            
            // Append the transformed word to the result
            result.append(transformedWord).append(" ");
        }
        
        // Trim the trailing space and print the result
        System.out.println(result.toString().trim());
        
        scanner.close();
    }
}
