#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string diceNumbers;
    getline(cin, diceNumbers); // Reading entire line of dice numbers

    int X, Y;
    cin >> X >> Y;

    stringstream ss(diceNumbers);
    char ch;
    int number;
    int netGain = 0;

    while (ss >> ch) {
        number = ch - '0'; // Convert character to integer
        if (number % 2 == 1) {
            // Odd number
            netGain += X;
        } else {
            // Even number
            netGain -= Y;
        }
    }

    cout << netGain << endl;

    return 0;
}
