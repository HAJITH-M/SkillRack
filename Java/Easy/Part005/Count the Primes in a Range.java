import java.util.Scanner;

public class PrimeNumberCounter {

    // Method to check if a number is prime
    public static boolean isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        if (number <= 3) {
            return true;
        }
        if (number % 2 == 0 || number % 3 == 0) {
            return false;
        }
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Reading the input values
        int N1 = scanner.nextInt();
        int N2 = scanner.nextInt();
        
        // Ensure that N1 is less than or equal to N2
        if (N1 > N2) {
            System.out.println("Invalid range: N1 should be less than or equal to N2.");
            return;
        }
        
        int primeCount = 0;
        
        // Count prime numbers in the range [N1, N2]
        for (int i = N1; i <= N2; i++) {
            if (isPrime(i)) {
                primeCount++;
            }
        }
        
        // Print the count of prime numbers
        System.out.println(primeCount);
    }
}
