import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input for string S
        String S = scanner.nextLine();
        
        // Input for character C
        char C = scanner.next().charAt(0);
        
        int pos = S.indexOf(C);
        if (pos != -1) {
            System.out.println(S.substring(0, pos));
        } else {
            System.out.println(S); // If C is not found, print the entire string
        }
        
        scanner.close();
    }
}
