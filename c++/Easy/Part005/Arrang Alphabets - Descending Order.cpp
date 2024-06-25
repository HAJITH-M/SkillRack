#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  // Read the input string S
  string S;
  getline(cin, S);

  // Sort the string in descending order
  sort(S.begin(), S.end(), greater<char>());

  // Remove consecutive duplicate characters
  S.erase(unique(S.begin(), S.end()), S.end());

  // Print the sorted string
  cout << S << endl;

  return 0;
}
