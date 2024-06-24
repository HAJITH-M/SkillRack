#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string S1, S2;
    getline(cin, S1); // Reading S1
    getline(cin, S2); // Reading S2

    unordered_set<char> setS1(S1.begin(), S1.end()); // Store characters of S1 in a set
    int commonCount = 0;

    // Iterate through characters of S2 and count common characters
    for (char c : S2) {
        if (setS1.find(c) != setS1.end()) {
            commonCount++;
            setS1.erase(c); // Remove matched character to avoid double counting
        }
    }

    cout << commonCount << endl;

    return 0;
}
