import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine(); // Read the entire line of input

        String[] carInfos = input.split("\\s+");

        String lowestMileageCar = "";
        double minMileage = Double.MAX_VALUE; // Start with a very high mileage

        for (String carInfo : carInfos) {
            // Extract CARNAME and MILEAGE
            String carName = carInfo.substring(0, carInfo.indexOf('@'));
            double mileage = Double.parseDouble(carInfo.substring(carInfo.indexOf('@') + 1));

            // Check if this car has lower mileage than current minimum
            if (mileage < minMileage) {
                minMileage = mileage;
                lowestMileageCar = carName;
            }
        }

        System.out.println(lowestMileageCar); // Output the name of the car with lowest mileage
        scanner.close();
    }
}
