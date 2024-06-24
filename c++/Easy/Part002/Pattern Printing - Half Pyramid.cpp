#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number of rows

    // Loop to print each row of the half pyramid
    for (int i = 1; i <= N; ++i) {
        // Print asterisks based on the current row number
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
