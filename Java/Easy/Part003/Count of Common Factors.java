import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        
        List<Integer> nums = new ArrayList<>();
        for (int i = 0; i < N; ++i) {
            nums.add(scanner.nextInt());
        }

        // Find the smallest number in the list
        int smallest = nums.stream().min(Integer::compare).orElse(1);

        // Find all factors of the smallest number
        List<Integer> factors = findFactors(smallest);

        // Count how many of these factors are common to all numbers in the list
        int commonFactorCount = 0;
        for (int factor : factors) {
            if (isCommonFactor(nums, factor)) {
                ++commonFactorCount;
            }
        }

        // Print the count of common factors excluding 1
        System.out.println(commonFactorCount);

        scanner.close();
    }

    // Function to find all factors of a number
    private static List<Integer> findFactors(int num) {
        List<Integer> factors = new ArrayList<>();
        for (int i = 2; i <= num; ++i) { // Start from 2 to exclude 1
            if (num % i == 0) {
                factors.add(i);
            }
        }
        return factors;
    }

    // Function to check if a number is a common factor of all numbers in the list
    private static boolean isCommonFactor(List<Integer> nums, int factor) {
        for (int num : nums) {
            if (num % factor != 0) {
                return false;
            }
        }
        return true;
    }
}
