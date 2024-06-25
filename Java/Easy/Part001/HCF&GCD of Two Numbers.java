import java.util.Scanner;

public class Hello {

    // Function to calculate GCD using Euclidean algorithm
    public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input for X and Y
        int X = scanner.nextInt();
        int Y = scanner.nextInt();
        
        // Calculate the GCD of X and Y
        int hcf = gcd(X, Y);
        
        // Output the HCF/GCD
        System.out.println(hcf);
        
        scanner.close();
    }
}
