import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String S = scanner.nextLine();  // Read the entire input line

        int num1 = 0, num2 = 0;
        char operation;

        // Find the position of the operation character
        int pos = -1;
        for (int i = 0; i < S.length(); i++) {
            char c = S.charAt(i);
            if ("ASMDasmd".indexOf(c) != -1) {
                pos = i;
                break;
            }
        }

        if (pos != -1 && pos > 0 && pos < S.length() - 1) {
            // Extract num1 and num2 from input string
            try {
                num1 = Integer.parseInt(S.substring(0, pos)); // Convert first part to integer
                num2 = Integer.parseInt(S.substring(pos + 1)); // Convert second part to integer
                operation = S.charAt(pos);  // Operation character
            } catch (NumberFormatException e) {
                System.err.println(e);
                return;
            }
        } else {
            return;  // Exit with error
        }

        int result = 0;

        // Perform the operation based on the character
        switch (operation) {
            case 'A':
            case 'a':
                result = num1 + num2;
                break;
            case 'S':
            case 's':
                result = num1 - num2;
                break;
            case 'M':
            case 'm':
                result = num1 * num2;
                break;
            case 'D':
            case 'd':
                if (num2 != 0) {
                    result = num1 / num2;  // Perform integer division
                } else {
                    return;  // Exit with error
                }
                break;
            default:
                return;  // Exit with error
        }

        // Output the result
        System.out.println(result);

        scanner.close();
    }
}
