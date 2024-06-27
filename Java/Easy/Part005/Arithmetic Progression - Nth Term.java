import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the first three terms of the arithmetic progression
        int a1 = scanner.nextInt();
        int a2 = scanner.nextInt();
        int a3 = scanner.nextInt();

        // Read the value of N
        int N = scanner.nextInt();

        // Calculate the common difference
        int d = a2 - a1;

        // Calculate the Nth term using the formula a_n = a_1 + (n-1) * d
        int a_n = a1 + (N - 1) * d;

        // Print the Nth term
        System.out.println(a_n);

        scanner.close();
    }
}
