import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the entire line of input
        String input = scanner.nextLine();
        
        // Use a scanner to parse the integers from the string
        Scanner lineScanner = new Scanner(input);
        
        int sum = 0;
        
        // Extract integers from the scanner
        while (lineScanner.hasNextInt()) {
            int number = lineScanner.nextInt();
            sum += number; // Add each integer to the sum
        }
        
        // Print the sum
        System.out.println(sum);
        
        lineScanner.close();
        scanner.close();
    }
}
