#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    getline(cin, S);  // Read the entire input line
    
    string result;  // To store the expanded string
    int count = 0;
    
    // Traverse through the input string
    for (int i = 0; i < S.length(); ++i) {
        if (isdigit(S[i])) {
            count = count * 10 + (S[i] - '0'); // Handle multi-digit numbers
        } else {
            result += string(count, S[i]); // Repeat the character count times
            count = 0; // Reset count for the next number
        }
    }

    // Output the expanded string
    cout << result << endl;

    return 0;
}
