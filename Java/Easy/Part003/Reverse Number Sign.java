import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        // Reverse the sign of N
        int reversedSign = -N;

        // Print the result
        System.out.println(reversedSign);

        scanner.close();
    }
}
