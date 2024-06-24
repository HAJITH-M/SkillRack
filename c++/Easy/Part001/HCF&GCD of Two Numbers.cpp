#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int X, Y;
    
    // Input for X and Y
    cin >> X >> Y;
    
    // Calculate the GCD of X and Y
    int hcf = gcd(X, Y);
    
    // Output the HCF/GCD
    cout << hcf << endl;

    return 0;
}
