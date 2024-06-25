#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Read the input string
    string S;
    getline(cin, S);

    // Convert the first letter of each word to uppercase
    bool new_word = true;
    for (char &ch : S) {
        if (isspace(ch)) {
            new_word = true;
        } else {
            if (new_word) {
                ch = toupper(ch);
                new_word = false;
            }
        }
    }

    // Print the result
    cout << S << endl;

    return 0;
}
