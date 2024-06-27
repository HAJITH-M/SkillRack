import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double rupees = scanner.nextDouble();

        // Convert rupees to paise and round the result to the nearest integer
        int paise = (int) Math.round(rupees * 100);

        // Output the paise value
        System.out.println(paise);

        scanner.close();
    }
}
