import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the input line
        String line = scanner.nextLine();
        
        // Initialize total distance and total time
        double totalDistance = 0.0;
        double totalTime = 0.0;
        
        // Split the input line by spaces to process each DISTANCE@TIMETAKEN
        String[] segments = line.split(" ");
        
        for (String segment : segments) {
            // Split each segment by '@' to separate distance and time
            String[] parts = segment.split("@");
            if (parts.length == 2) {
                try {
                    // Parse distance and time
                    double distance = Double.parseDouble(parts[0]);
                    double time = Double.parseDouble(parts[1]);
                    
                    // Accumulate total distance and total time
                    totalDistance += distance;
                    totalTime += time;
                } catch (NumberFormatException e) {
                    // Handle the case where distance or time is not a valid number
                    System.err.println("Invalid input format");
                    return;
                }
            } else {
                // Handle the case where the segment does not contain exactly one '@'
                System.err.println("Invalid input format");
                return;
            }
        }
        
        // Calculate the average speed
        if (totalTime != 0) {
            double averageSpeed = totalDistance / totalTime;
            
            // Print the average speed formatted to 2 decimal places
            System.out.printf("%.2f kmph%n", averageSpeed);
        } else {
            // Handle the case where total time is 0 (should not happen in valid inputs)
            System.err.println("Total time cannot be zero");
        }
    }
}
