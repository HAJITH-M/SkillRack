#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<char> a(input.begin(), input.end());
    vector<char> b(a.size());

    for (size_t i = 0; i < a.size(); i++) {
        if (i == 0 || i == a.size() - 1) {
            b[i] = a[i];
        } else {
            b[i] = ' ';
        }
    }

    for (size_t i = 0; i < a.size(); i++) {
        if (i == a.size() / 2) {
            for (size_t j = 0; j < b.size(); j++) {
                if (j == a.size() - i - 1) {
                    b[j] = a[j];
                } else {
                    b[j] = ' ';
                }
            }
            cout << string(b.begin(), b.end()) << endl;
        } else {
            for (size_t j = 0; j < b.size(); j++) {
                if (j == a.size() - i - 1 || j == i) {
                    b[j] = a[j];
                } else {
                    b[j] = ' ';
                }
            }
            cout << string(b.begin(), b.end()) << endl;
        }
    }

    return 0;
}
