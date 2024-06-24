#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    getline(cin, S);  // Read the entire input line
    
    int num1 = 0, num2 = 0;
    char operation;
    
    // Find the position of the operation character
    size_t pos = S.find_first_of("ASMDasmd");
    if (pos != string::npos && pos > 0 && pos < S.size()-1) {
        // Extract num1 and num2 from input string
        num1 = stoi(S.substr(0, pos)); // Convert first part to integer
        num2 = stoi(S.substr(pos + 1)); // Convert second part to integer
        operation = S[pos];  // Operation character
    } else {
        return 1;  // Exit with error
    }
    
    int result = 0;
    
    // Perform the operation based on the character
    switch(operation) {
        case 'A':
        case 'a':
            result = num1 + num2;
            break;
        case 'S':
        case 's':
            result = num1 - num2;
            break;
        case 'M':
        case 'm':
            result = num1 * num2;
            break;
        case 'D':
        case 'd':
            if (num2 != 0) {
                result = num1 / num2;  // Perform integer division
            } else {
                return 1;  // Exit with error
            }
            break;
        default:
            return 1;  // Exit with error
    }
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
