#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string AA;
  getline(cin, AA); // Use getline to handle potential spaces in input
  vector<char> AAVec(AA.begin(), AA.end()); // Convert string to vector

  string BB;
  getline(cin, BB);
  vector<char> BBVec(BB.begin(), BB.end()); // Convert string to vector

  int j = 0;
  for (int i = 0; i < AAVec.size(); i++) {
    for (int k = 0; k < BBVec.size(); k++) {
      if (j >= BBVec.size()) {
        break;
      } else if (AAVec[i] != BBVec[j]) {
        break;
      } else if (AAVec[i] == BBVec[j]) {
        cout << BBVec[j];
      }
      j++;
    }
  }
  cout << endl; // Add a newline at the end
  return 0;
}
