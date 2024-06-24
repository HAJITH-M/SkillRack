#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read input N

    // Loop through each row i from 1 to N
    for (int i = 1; i <= N; ++i) {
        // Print numbers from 1 to i in each row separated by spaces
        for (int j = 1; j <= i; ++j) {
            cout << j;
            if (j < i) {
                cout << " "; // Print space after each number, except the last one
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
