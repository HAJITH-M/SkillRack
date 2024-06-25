#include <iostream>
#include <string>
#include <climits>
using namespace std;

// Function to find the first repeating character in a string
char firstRepeating(string &str) {
    int n = str.size();
    char ans = '\0'; // Initialize ans with null character
    int index = INT_MAX;

    for (int i = 0; i < n; i++) {
        char temp = str[i];
        for (int j = i + 1; j < n; j++) {
            if (str[j] == temp) {
                if (j < index) {
                    index = j;
                    ans = str[j];
                    break; // Once found the first repeating character, exit the inner loop
                }
            }
        }
        if (ans != '\0') {
            break; // If found the first repeating character, exit the outer loop
        }
    }

    return ans;
}

int main() {
    string str;
    
    // Prompting the user to enter a string
    getline(cin, str); // Read entire input line
    
    // Finding the first repeating character
    char result = firstRepeating(str);
    
    if (result != '\0') {
        cout << result << endl;
    } else {
        cout << endl;
    }
    
    return 0;
}
