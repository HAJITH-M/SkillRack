import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the number of rows (N)
        int N = scanner.nextInt();
        
        // Loop to print each row of the half pyramid
        for (int i = 1; i <= N; ++i) {
            // Print asterisks based on the current row number
            for (int j = 1; j <= i; ++j) {
                System.out.print("* ");
            }
            System.out.println(); // Move to the next line after each row
        }
        
        scanner.close();
    }
}
