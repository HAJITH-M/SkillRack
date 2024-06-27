import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String S = scanner.nextLine();  // Read the entire input line

        int underscorePos = S.indexOf('_');  // Find the position of the first underscore

        // Convert the string to a character array for in-place modification
        char[] charArray = S.toCharArray();

        // Reverse the string up to the first underscore (if underscore exists)
        if (underscorePos != -1) {
            // Reverse the substring from start to underscorePos
            reverse(charArray, 0, underscorePos - 1);
        } else {
            // If underscore is not found, reverse the entire string
            reverse(charArray, 0, charArray.length - 1);
        }

        // Convert the character array back to a string and output the modified string
        System.out.println(new String(charArray));

        scanner.close();
    }

    // Helper function to reverse a portion of the character array
    private static void reverse(char[] array, int start, int end) {
        while (start < end) {
            char temp = array[start];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }
    }
}
