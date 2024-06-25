#include <iostream>
using namespace std;

int main() {
    // Read the first three terms of the arithmetic progression
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    // Read the value of N
    int N;
    cin >> N;

    // Calculate the common difference
    int d = a2 - a1;

    // Calculate the Nth term using the formula a_n = a_1 + (n-1) * d
    int a_n = a1 + (N - 1) * d;

    // Print the Nth term
    cout << a_n << endl;

    return 0;
}
