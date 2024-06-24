#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    char C;
    
    // Input for string S
    getline(cin, S);
    
    // Input for character C
    cin >> C;
    
    size_t pos = S.find(C);
    if (pos != string::npos) {
        cout << S.substr(0, pos) << endl;
    } else {
        cout << S << endl; // If C is not found, print the entire string
    }

    return 0;
}
