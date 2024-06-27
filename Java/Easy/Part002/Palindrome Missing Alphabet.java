import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String inputString = scanner.nextLine(); // Get input from the user

        List<Character> charList = new ArrayList<>();
        for (char c : inputString.toCharArray()) {
            charList.add(c);
        }

        int j = charList.size() - 1; // Initialize j to the last index of the list

        for (int i = 0; i < charList.size(); i++) {
            if (!charList.get(i).equals(charList.get(j))) {
                if (charList.get(i).equals(charList.get(j - 1)) && i != j - 1) {
                    System.out.println(charList.get(j)); // Print the character at index j
                    break;
                } else {
                    System.out.println(charList.get(i)); // Print the character at index i
                    break;
                }
            }
            j--; // Decrement j
        }

        scanner.close();
    }
}
