import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int year = scanner.nextInt();

        if (year % 400 == 0) {
            System.out.println("yes");
        } else if (year % 100 == 0) {
            System.out.println("no");
        } else if (year % 4 == 0) {
            System.out.println("yes");
        } else {
            System.out.println("no");
        }

        scanner.close();
    }
}
