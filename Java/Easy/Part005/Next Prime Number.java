import java.util.Scanner;

public class Hello {

    // Method to check if a number is prime
    public static boolean isPrime(int num) {
        if (num <= 1) return false; // 0 and 1 are not prime numbers
        if (num <= 3) return true;  // 2 and 3 are prime numbers
        if (num % 2 == 0 || num % 3 == 0) return false; // Check for multiples of 2 and 3
        
        // Check from 5 to sqrt(num)
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) return false;
        }
        return true;
    }

    // Method to find the next prime number greater than a given number
    public static int nextPrime(int n) {
        int next = n + 1;
        while (true) {
            if (isPrime(next)) {
                return next;
            }
            next++;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read input number
        int N = scanner.nextInt();
        
        // Find and print the next prime number
        System.out.println(nextPrime(N));
        
        scanner.close();
    }
}