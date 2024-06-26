import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt();
        
        int firstInningsTotal = 0, secondInningsTotal = 0;
        
        for (int i = 0; i < N; ++i) {
            int firstInnings = scanner.nextInt();
            int secondInnings = scanner.nextInt();
            
            firstInningsTotal += firstInnings;
            secondInningsTotal += secondInnings;
        }
        
        double firstInningsAverage = (double) firstInningsTotal / N;
        double secondInningsAverage = (double) secondInningsTotal / N;
        
        System.out.printf("%.2f\n", firstInningsAverage);
        System.out.printf("%.2f\n", secondInningsAverage);
        
        scanner.close();
    }
}
