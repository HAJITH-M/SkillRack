#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string S;
    getline(cin, S);  // Read the entire input line
    
    size_t underscore_pos = S.find('_');  // Find the position of the first underscore

    // Reverse the string up to the first underscore (if underscore exists)
    if (underscore_pos != string::npos) {
        // Reverse the substring from start to underscore_pos
        reverse(S.begin(), S.begin() + underscore_pos);
    } else {
        // If underscore is not found, reverse the entire string
        reverse(S.begin(), S.end());
    }

    // Output the modified string
    cout << S << endl;

    return 0;
}
