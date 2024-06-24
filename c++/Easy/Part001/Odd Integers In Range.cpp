#include <iostream>
using namespace std;

int main() {
    int X, Y;
    
    // Input for X and Y
    cin >> X;
    cin >> Y;

    // Loop through numbers between X and Y
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}
