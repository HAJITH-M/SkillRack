import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read input N
        int N = scanner.nextInt();
        
        // Loop through each row i from 1 to N
        for (int i = 1; i <= N; ++i) {
            // Print numbers from 1 to i in each row separated by spaces
            for (int j = 1; j <= i; ++j) {
                System.out.print(j);
                if (j < i) {
                    System.out.print(" "); // Print space after each number, except the last one
                }
            }
            System.out.println(); // Move to the next line after each row
        }
        
        scanner.close();
    }
}
