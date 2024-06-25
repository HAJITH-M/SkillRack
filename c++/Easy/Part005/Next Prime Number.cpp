#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Read the input number N
    int N;
    cin >> N;

    // Find the next immediate prime number greater than N
    int nextPrime = N + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }

    // Output the next immediate prime number
    cout << nextPrime << endl;

    return 0;
}
