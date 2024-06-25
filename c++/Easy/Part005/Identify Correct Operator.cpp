#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    // Read the input expression
    string expression;
    cin >> expression;

    // Identify the position of the operator and the equal sign
    size_t operatorPos = expression.find_first_of("+-*/");
    size_t equalPos = expression.find('=');

    // Extract numbers as strings
    string aStr = expression.substr(0, operatorPos);
    string bStr = expression.substr(operatorPos + 1, equalPos - operatorPos - 1);
    string cStr = expression.substr(equalPos + 1);

    // Convert strings to integers
    int A = stoi(aStr);
    int B = stoi(bStr);
    int C = stoi(cStr);

    // Determine the correct operator
    if (A + B == C) {
        cout << "+" << endl;
    } else if (A - B == C) {
        cout << "-" << endl;
    } else if (A * B == C) {
        cout << "*" << endl;
    } else if (B != 0 && A / B == C) { // Check for division by zero
        cout << "/" << endl;
    } else {
        cout << "No valid operator found." << endl; // This shouldn't happen as per problem constraints
    }

    return 0;
}
