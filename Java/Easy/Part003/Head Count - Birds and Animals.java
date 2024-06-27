import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int H = scanner.nextInt();
        int L = scanner.nextInt();

        // Calculate the number of birds and animals
        int B = (4 * H - L) / 2;
        int A = H - B;

        // Print the result
        System.out.println(B + " " + A);

        scanner.close();
    }
}
