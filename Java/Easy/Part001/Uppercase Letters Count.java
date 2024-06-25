import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input for string S
        String S = scanner.nextLine();
        
        int upperCaseCount = 0;
        
        // Loop through each character in the string
        for (char c : S.toCharArray()) {
            if (Character.isUpperCase(c)) {
                upperCaseCount++;
            }
        }
        
        // Print the count of uppercase letters
        System.out.println(upperCaseCount);
        
        scanner.close();
    }
}
