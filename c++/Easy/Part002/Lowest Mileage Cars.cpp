#include <iostream>
#include <sstream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string input;
    getline(cin, input); // Read the entire line of input
    
    stringstream ss(input);
    string carInfo;
    
    string lowestMileageCar;
    double minMileage = numeric_limits<double>::max(); // Start with a very high mileage
    
    while (ss >> carInfo) {
        // Extract CARNAME and MILEAGE
        string carName = carInfo.substr(0, carInfo.find('@'));
        double mileage = stod(carInfo.substr(carInfo.find('@') + 1));
        
        // Check if this car has lower mileage than current minimum
        if (mileage < minMileage) {
            minMileage = mileage;
            lowestMileageCar = carName;
        }
    }
    
    cout << lowestMileageCar << endl; // Output the name of the car with lowest mileage
    return 0;
}
