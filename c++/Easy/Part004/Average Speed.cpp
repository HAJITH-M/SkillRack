#include <iostream>
#include <sstream>
#include <iomanip> // For setprecision

using namespace std;

void calculate_average_speed(string input_string) {
    stringstream ss(input_string);
    string pair;
    
    double total_distance = 0.0;
    double total_time = 0.0;
    
    // Read pairs until the end of stringstream
    while (getline(ss, pair, ' ')) {
        // Split the pair into distance and time
        size_t pos = pair.find('@');
        string distance_str = pair.substr(0, pos);
        string time_str = pair.substr(pos + 1);
        
        // Convert distance and time from string to double
        double distance = stod(distance_str);
        double time = stod(time_str);
        
        // Accumulate total distance and total time
        total_distance += distance;
        total_time += time;
    }
    
    // Calculate average speed
    double average_speed = total_distance / total_time;
    
    // Print the result in the required format
    cout << fixed << setprecision(2) << average_speed << " kmph" << endl;
}

int main() {
    string input_string;
    getline(cin, input_string); // Read input dynamically
    
    calculate_average_speed(input_string);
    
    return 0;
}
