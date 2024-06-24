#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    int N;
    
    // Input for N
    cin >> N;
    
    // Boundary condition check (not necessary if inputs are guaranteed to be valid)
    if (N < 2 || N > 100) {
        return 1;
    }

    vector<int> numbers(N);
    
    // Input for N integers
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }
    
    // Initialize the largest and second largest values
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
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
    cout << secondLargest << endl;

    return 0;
}
