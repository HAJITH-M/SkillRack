#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string inputString;
  getline(cin, inputString); // Get input from the user

  vector<char> charList(inputString.begin(), inputString.end()); // Convert string to vector of characters
  int j = charList.size() - 1; // Initialize j to the last index of the vector

  for (int i = 0; i < charList.size(); i++) {
    if (charList[i] != charList[j]) {
      if (charList[i] == charList[j - 1] && i != j - 1) {
        cout << charList[j] << endl; // Print the character at index j
        break;
      } else {
        cout << charList[i] << endl; // Print the character at index i
        break;
      }
    }
    j--; // Decrement j
  }

  return 0;
}