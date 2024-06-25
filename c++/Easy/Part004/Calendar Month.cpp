#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    // Read the input date
    string date;
    cin >> date;

    // Extract the month part from the date
    string monthStr = date.substr(3, 2);

    // Convert the month string to an integer
    int month = stoi(monthStr);

    // Map month numbers to month names
    unordered_map<int, string> monthNames = {
        {1, "January"}, {2, "February"}, {3, "March"},
        {4, "April"}, {5, "May"}, {6, "June"},
        {7, "July"}, {8, "August"}, {9, "September"},
        {10, "October"}, {11, "November"}, {12, "December"}
    };

    // Print the corresponding month name
    cout << monthNames[month] << endl;

    return 0;
}
