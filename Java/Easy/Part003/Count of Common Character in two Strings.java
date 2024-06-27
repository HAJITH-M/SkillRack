import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String S1 = scanner.nextLine(); // Reading S1
        String S2 = scanner.nextLine(); // Reading S2

        Set<Character> setS1 = new HashSet<>();
        for (char c : S1.toCharArray()) {
            setS1.add(c); // Store characters of S1 in a set
        }

        int commonCount = 0;

        // Iterate through characters of S2 and count common characters
        for (char c : S2.toCharArray()) {
            if (setS1.contains(c)) {
                commonCount++;
                setS1.remove(c); // Remove matched character to avoid double counting
            }
        }

        System.out.println(commonCount);
        scanner.close();
    }
}
