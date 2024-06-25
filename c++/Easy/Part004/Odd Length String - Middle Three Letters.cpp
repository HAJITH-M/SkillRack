#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read the input string
    string S;
    cin >> S;

    // Determine the length of the string
    int n = S.length();

    // Calculate the middle index
    int middle = n / 2;

    // Extract the middle three characters
    string middle_three = S.substr(middle - 1, 3);

    // Print the result
    cout << middle_three << endl;

    return 0;
}
