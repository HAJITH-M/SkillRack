#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

int main() {
    vector<string> sen;
    string word, w1, w2;
    vector<int> index1, index2;
    int minDist = INT_MAX;

   
    while (cin >> word && word != "END") {
        sen.push_back(word);
    }

    if (sen.size() < 2) {
        
        return 1;
    }

    w1 = sen[sen.size() - 2];
    w2 = sen[sen.size() - 1];
    sen.pop_back();
    sen.pop_back();

    for (int j = 0; j < sen.size(); j++) {
        if (sen[j] == w1) {
            index1.push_back(j);
        } else if (sen[j] == w2) {
            index2.push_back(j);
        }
    }

    if (index2.empty()) {
        cout << index1.size() - 2 << endl;
    } else {
        for (int i : index1) {
            for (int j : index2) {
                int diff = abs(i - j);
                if (diff < minDist) {
                    minDist = diff;
                }
            }
        }
        cout << minDist << endl;
    }

    return 0;
}
