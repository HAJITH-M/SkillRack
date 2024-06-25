import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        if (n < 3 || n > 50) {
            return;
        }

        long a = 0, b = 1;
        System.out.print(a + " ");

        if (n > 1) {
            System.out.print(b + " ");
        }

        for (int i = 3; i <= n; i++) {
            long next = a + b;
            System.out.print(next + " ");
            a = b;
            b = next;
        }

        scanner.close();
    }
}
