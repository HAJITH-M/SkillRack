#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& str) {
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string S;
    cin >> S;
    int count = 0;
    
    for (size_t i = 0; i < S.length(); i++) {
        for (size_t j = i + 2; j <= S.length(); j++) {
            if (isPalindrome(S.substr(i, j - i))) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
