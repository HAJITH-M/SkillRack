#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    
    // Input for string S
    cin >> S;

    // Ensure the length of S is at least 3 (as per boundary conditions)
    if (S.length() >= 3) {
        // Output the substring from index 1 to (length - 2)
        cout << S.substr(1, S.length() - 2) << endl;
    }

    return 0;
}
