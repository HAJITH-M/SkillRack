#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read the input string
    string S;
    getline(cin, S);

    // Variable to store the word count
    int word_count = 0;

    // Loop through the string and count words
    bool in_word = false;
    for (char ch : S) {
        if (isspace(ch)) {
            in_word = false;
        } else {
            if (!in_word) {
                word_count++;
                in_word = true;
            }
        }
    }

    // Print the result
    cout << word_count << endl;

    return 0;
}
