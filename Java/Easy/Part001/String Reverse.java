import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input for string S
        String S = scanner.next();
        
        // Reverse the string
        String reversedS = "";
        for (int i = S.length() - 1; i >= 0; --i) {
            reversedS += S.charAt(i);
        }
        
        // Output the reversed string
        System.out.println(reversedS);
        
        scanner.close();
    }
}
