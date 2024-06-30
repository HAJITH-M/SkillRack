#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
    string word;
    cin >> word;

    // Define the potential replacements
    unordered_map<char, unordered_set<char>> replacements = {
        {'T', {'K'}},
        {'D', {'G'}},
        {'L', {'R'}},
        {'F', {'R'}}
    };

    // Count the possible interpretations
    int count = 1; // start with the original word

    for (char ch : word) {
        if (replacements.find(ch) != replacements.end()) {
            count *= (1 + replacements[ch].size());
        }
    }

    cout << count << endl;

    return 0;
}
