import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the input
        String S = scanner.nextLine();
        int N = scanner.nextInt();

        // Calculate the length of the string
        int L = S.length();

        // Compute the effective rotation
        N = N % L;

        // If rotation is 0, no need to change the string
        if (N == 0) {
            System.out.println(S);
            return;
        }

        // Perform the rotation
        String rotatedString = S.substring(L - N) + S.substring(0, L - N);

        // Print the rotated string
        System.out.println(rotatedString);
    }
}
