#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string n;
    getline(cin, n);

    int d = 0;
    vector<string> punctuation = {".", ",", "!", "?", ";", ":", "-", "'", "\"", "(", ")", "[", "]", "{", "}", "<", ">", "/", "\\"};

    for (const string& c : punctuation) {
        size_t pos = 0;
        while ((pos = n.find(c, pos)) != string::npos) {
            n.replace(pos, c.length(), " ");
            pos += 1; // Move past the current position
        }
    }

    stringstream ss(n);
    string word;
    while (ss >> word) {
        if (word == "the" || word == "a" || word == "an") {
            d++;
        }
    }

    cout << d << endl;

    return 0;
}
