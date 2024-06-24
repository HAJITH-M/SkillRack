#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S); // Read the entire input string

    string result = ""; // To store the resulting string with only alphabets

    for (char c : S) {
        if (isalpha(c)) { // Check if the character is an alphabet
            result += c; // Append the alphabet character to the result string
        }
    }

    cout << result << endl; // Print the resulting string
    return 0;
}
