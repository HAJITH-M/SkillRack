#include <iostream>
#include <string>

using namespace std;

void characters_at_multiples_of_x(string S, int X) {
    string result = "";
    
    // Iterate over the string S
    for (int i = X - 1; i < S.length(); i += X) {
        result += S[i];
    }
    
    // Print the result
    cout << result << endl;
}

int main() {
    string S;
    int X;
    
    // Read input values
    getline(cin, S);
    cin >> X;
    
    // Call the function to calculate and print characters at multiples of X
    characters_at_multiples_of_x(S, X);
    
    return 0;
}
