import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input for X and Y
        int X = scanner.nextInt();
        int Y = scanner.nextInt();
        
        // Loop through numbers between X and Y
        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                System.out.print(i + " ");
            }
        }
        
        scanner.close();
    }
}
