import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input for string S
        String S = scanner.next();
        
        // Ensure the length of S is at least 3 (as per boundary conditions)
        if (S.length() >= 3) {
            // Output the substring from index 1 to (length - 2)
            System.out.println(S.substring(1, S.length() - 1));
        }
        
        scanner.close();
    }
}
