#include <iostream>
#include <vector>
#include <sstream>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    // Split the input string and convert to integers
    stringstream ss(input);
    vector<int> a;
    int temp;
    while (ss >> temp) {
        a.push_back(temp);
    }

    // Calculate the product of all elements
    int l = accumulate(a.begin(), a.end(), 1, multiplies<int>());

    // Create the product array
    vector<int> p;
    for (int i : a) {
        p.push_back(l / i);
    }

    // Print the result
    for (size_t i = 0; i < p.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << p[i];
    }
    cout << endl;

    return 0;
}
