import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the input string S
        String S = scanner.nextLine();

        // Read the characters A and B
        char A = scanner.next().charAt(0);
        char B = scanner.next().charAt(0);

        // Initialize the count of occurrences
        int count = 0;

        // Iterate through the string and count occurrences where A is followed by B
        for (int i = 0; i < S.length() - 1; ++i) {
            if (S.charAt(i) == A && S.charAt(i + 1) == B) {
                count++;
            }
        }

        // Print the count
        System.out.println(count);

        scanner.close();
    }
}
