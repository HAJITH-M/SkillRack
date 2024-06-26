import java.util.Scanner;

public class Hello {
    // Function to compare if a time is later than 10:00
    public static boolean isLate(String time) {
        String[] parts = time.split(":");
        int hours = Integer.parseInt(parts[0]);
        int minutes = Integer.parseInt(parts[1]);

        // Compare time with 10:00
        return hours > 10 || (hours == 10 && minutes > 0);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine(); // Read the entire line of input

        String[] times = input.split("\\s+");
        int lateCount = 0;

        for (String time : times) {
            if (isLate(time)) {
                lateCount++;
            }
        }

        System.out.println(lateCount);
        scanner.close();
    }
}
