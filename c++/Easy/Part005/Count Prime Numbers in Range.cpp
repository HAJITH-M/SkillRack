#include <iostream>
#include <cmath> // for sqrt function

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; // 2 is prime
    if (num % 2 == 0) return false; // even numbers other than 2 are not prime
    
    // Check for divisibility from 3 up to sqrt(num)
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;
    
    // Ensure N1 <= N2
    if (N1 > N2) {
        swap(N1, N2);
    }
    
    int primeCount = 0;
    
    // Iterate through each number in the range [N1, N2]
    for (int num = N1; num <= N2; ++num) {
        if (isPrime(num)) {
            primeCount++;
        }
    }
    
    cout << primeCount << endl;
    
    return 0;
}
