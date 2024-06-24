#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// Function to compare if a time is later than 10:00
bool isLate(const string& time) {
    int hours, minutes;
    char colon;
    stringstream ss(time);
    ss >> hours >> colon >> minutes;

    // Compare time with 10:00
    if (hours > 10 || (hours == 10 && minutes > 0)) {
        return true;
    }
    return false;
}

int main() {
    string input;
    getline(cin, input); // Read the entire line of input

    stringstream ss(input);
    string time;
    int lateCount = 0;

    while (ss >> time) {
        if (isLate(time)) {
            lateCount++;
        }
    }

    cout << lateCount << endl;
    return 0;
}
