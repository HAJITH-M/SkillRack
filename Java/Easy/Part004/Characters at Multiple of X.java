import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the string S
        String S = scanner.nextLine();

        // Read the integer X
        int X = scanner.nextInt();

        // Initialize an empty result string
        StringBuilder result = new StringBuilder();

        // Loop through the string and collect characters at positions which are multiples of X
        for (int i = X - 1; i < S.length(); i += X) {
            result.append(S.charAt(i));
        }

        // Print the result
        System.out.println(result.toString());
    }
}
