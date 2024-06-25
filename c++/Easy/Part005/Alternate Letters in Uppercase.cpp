#include <iostream>
#include <string>
#include <sstream> // for stringstream
#include <cctype> // for isalpha

using namespace std;

string transformString(const string& input) {
    stringstream ss(input);
    string word, transformedString, result;
    
    while (ss >> word) {
        transformedString = "";
        
        for (int i = 0; i < word.length(); ++i) {
            if (i % 2 == 0) { // odd position (1-based index)
                transformedString += toupper(word[i]);
            } else { // even position
                transformedString += tolower(word[i]);
            }
        }
        
        result += transformedString + " ";
    }
    
    // Remove the trailing space and return the result
    return result.substr(0, result.length() - 1);
}

int main() {
    string S;
    getline(cin, S);
    
    string output = transformString(S);
    cout << output << endl;
    
    return 0;
}
