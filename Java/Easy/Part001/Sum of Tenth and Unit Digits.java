import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input for N
        int N = scanner.nextInt();
        
        // Extract the tenth and unit digits
        int tenthDigit = (N / 10) % 10;
        int unitDigit = N % 10;
        
        // Calculate the sum of tenth and unit digits
        int sum = tenthDigit + unitDigit;
        
        // Output the sum
        System.out.println(sum);
        
        scanner.close();
    }
}
