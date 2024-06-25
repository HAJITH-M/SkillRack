import java.util.Scanner;

public class Hello {

    public static boolean isPrime(int n) {
        if (n <= 1) return false; // numbers less than or equal to 1 are not prime
        if (n <= 3) return true;  // 2 and 3 are prime numbers
        if (n % 2 == 0 || n % 3 == 0) return false; // multiples of 2 and 3 are not prime

        // check for divisors from 5 to sqrt(n)
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        if (isPrime(N)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        scanner.close();
    }
}
