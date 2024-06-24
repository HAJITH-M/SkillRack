#include <iostream>
using namespace std;

int main() {
    int N;
    
    // Input for N
    cin >> N;
    
    // Extract the tenth and unit digits
    int tenthDigit = (N / 10) % 10;
    int unitDigit = N % 10;
    
    // Calculate the sum of tenth and unit digits
    int sum = tenthDigit + unitDigit;
    
    // Output the sum
    cout << sum << endl;

    return 0;
}
