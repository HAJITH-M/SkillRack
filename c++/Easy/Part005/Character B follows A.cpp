#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read the input string S
    string S;
    getline(cin, S);

    // Read the characters A and B
    char A, B;
    cin >> A >> B;

    // Initialize the count of occurrences
    int count = 0;

    // Iterate through the string and count occurrences where A is followed by B
    for (size_t i = 0; i < S.length() - 1; ++i) {
        if (S[i] == A && S[i + 1] == B) {
            count++;
        }
    }

    // Print the count
    cout << count << endl;

    return 0;
}
