import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String S = scanner.nextLine();  // Read the entire input line

        StringBuilder result = new StringBuilder();  // To store the expanded string
        int count = 0;

        // Traverse through the input string
        for (int i = 0; i < S.length(); ++i) {
            char ch = S.charAt(i);
            if (Character.isDigit(ch)) {
                count = count * 10 + (ch - '0'); // Handle multi-digit numbers
            } else {
                result.append(String.valueOf(ch).repeat(Math.max(0, count))); // Repeat the character count times
                count = 0; // Reset count for the next number
            }
        }

        // Output the expanded string
        System.out.println(result.toString());

        scanner.close();
    }
}
