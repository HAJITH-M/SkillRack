#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string a;
    int n;
    getline(cin, a);
    cin >> n;
    a = a.substr(0, a.find_first_of('\n')); // trimming the newline character from input

    vector<string> l;
    int k = 0;
    vector<string> p(n, "");

    for (size_t i = 0; i < a.length(); i += n) {
        if (i % 2 == 0) {
            l.push_back(a.substr(i, min(n, static_cast<int>(a.length() - i))));
        } else {
            string substr = a.substr(i, min(n, static_cast<int>(a.length() - i)));
            reverse(substr.begin(), substr.end());
            l.push_back(substr);
        }
    }

    for (int i = 0; i < n; i++) {
        string f = "";
        for (const string& j : l) {
            if (k < j.length()) {
                f += j[k];
            }
        }
        p[i] = f;
        k++;
    }

    for (const string& s : p) {
        cout << s;
    }
    cout << endl;

    return 0;
}
