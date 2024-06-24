#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    
    // Input for string S
    getline(cin, S);
    
    int upperCaseCount = 0;
    
    // Loop through each character in the string
    for (char c : S) {
        if (isupper(c)) {
            upperCaseCount++;
        }
    }
    
    // Print the count of uppercase letters
    cout << upperCaseCount << endl;

    return 0;
}
