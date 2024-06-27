import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String diceNumbers = scanner.nextLine(); // Reading entire line of dice numbers

        int X = scanner.nextInt();
        int Y = scanner.nextInt();

        int netGain = 0;

        for (char ch : diceNumbers.toCharArray()) {
            if (Character.isDigit(ch)) { // Ensure character is a digit
                int number = ch - '0'; // Convert character to integer
                if (number % 2 == 1) {
                    // Odd number
                    netGain += X;
                } else {
                    // Even number
                    netGain -= Y;
                }
            }
        }

        System.out.println(netGain);

        scanner.close();
    }
}
