#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    
    // Input for string S
    cin >> S;
    
    // Reverse the string
    string reversedS = "";
    for (int i = S.length() - 1; i >= 0; --i) {
        reversedS += S[i];
    }
    
    // Output the reversed string
    cout << reversedS << endl;

    return 0;
}
