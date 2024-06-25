import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the entire input string
        String S = scanner.nextLine();
        
        // StringBuilder to store the resulting string with only alphabets
        StringBuilder result = new StringBuilder();
        
        // Loop through each character in the string
        for (char c : S.toCharArray()) {
            if (Character.isLetter(c)) { // Check if the character is an alphabet
                result.append(c); // Append the alphabet character to the result StringBuilder
            }
        }
        
        // Print the resulting string
        System.out.println(result.toString());
        
        scanner.close();
    }
}
