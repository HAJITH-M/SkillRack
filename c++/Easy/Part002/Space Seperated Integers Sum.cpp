#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input); // Read the entire line of input

    stringstream ss(input); // Use a stringstream to parse the integers
    int number, sum = 0;
    
    while (ss >> number) { // Extract integers from the stringstream
        sum += number; // Add each integer to the sum
    }
    
    cout << sum << endl; // Print the sum
    return 0;
}
