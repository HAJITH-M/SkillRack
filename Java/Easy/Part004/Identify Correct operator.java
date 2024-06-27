import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the input expression
        String expression = scanner.next();

        // Identify the position of the operator and the equal sign
        int operatorPos = -1;
        int equalPos = -1;

        // Find operator position
        for (int i = 0; i < expression.length(); i++) {
            char c = expression.charAt(i);
            if (c == '+' || c == '-' || c == '*' || c == '/') {
                operatorPos = i;
                break;
            }
        }

        // Find equal sign position
        for (int i = 0; i < expression.length(); i++) {
            if (expression.charAt(i) == '=') {
                equalPos = i;
                break;
            }
        }

        // Extract numbers as strings
        String aStr = expression.substring(0, operatorPos);
        String bStr = expression.substring(operatorPos + 1, equalPos);
        String cStr = expression.substring(equalPos + 1);

        // Convert strings to integers
        int A = Integer.parseInt(aStr);
        int B = Integer.parseInt(bStr);
        int C = Integer.parseInt(cStr);

        // Determine the correct operator
        if (A + B == C) {
            System.out.println("+");
        } else if (A - B == C) {
            System.out.println("-");
        } else if (A * B == C) {
            System.out.println("*");
        } else if (B != 0 && A / B == C) { // Check for division by zero
            System.out.println("/");
        } else {
            System.out.println("No valid operator found."); // This shouldn't happen as per problem constraints
        }

        scanner.close();
    }
}
