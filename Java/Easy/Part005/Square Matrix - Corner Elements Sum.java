import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the size of the matrix
        int N = scanner.nextInt();
        
        // Initialize the matrix and read its elements
        int[][] matrix = new int[N][N];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        // Calculate the sum of the corner elements
        int sumOfCorners = matrix[0][0] + matrix[0][N-1] + matrix[N-1][0] + matrix[N-1][N-1];
        
        // Output the result
        System.out.println(sumOfCorners);
        
        scanner.close();
    }
}
