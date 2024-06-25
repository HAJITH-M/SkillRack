import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input for N
        int N = scanner.nextInt();
        
        // Boundary condition check (not necessary if inputs are guaranteed to be valid)
        if (N < 2 || N > 100) {
            return;
        }
        
        int[] numbers = new int[N];
        
        // Input for N integers
        for (int i = 0; i < N; ++i) {
            numbers[i] = scanner.nextInt();
        }
        
        // Initialize the largest and second largest values
        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;
        
        // Find the largest and second largest values
        for (int i = 0; i < N; ++i) {
            if (numbers[i] > largest) {
                secondLargest = largest;
                largest = numbers[i];
            } else if (numbers[i] > secondLargest && numbers[i] != largest) {
                secondLargest = numbers[i];
            }
        }
        
        // Print the second largest integer
        System.out.println(secondLargest);
        
        scanner.close();
    }
}
