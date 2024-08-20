import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the two input strings
        String S1 = scanner.nextLine();
        String S2 = scanner.nextLine();
        
        // Close the scanner
        scanner.close();

        // Compare the strings and concatenate them in alphabetical order
        if (S1.compareTo(S2) < 0) {
            System.out.println(S1 + S2);
        } else {
            System.out.println(S2 + S1);
        }
    }
}
