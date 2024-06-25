#include <iostream>
#include <string>
#include <algorithm> // for std::min

using namespace std;

int main() {
    string S1, S2;
    cin >> S1 >> S2;
    
    if (S1 < S2) {
        cout << S1 + S2 << endl;
    } else {
        cout << S2 + S1 << endl;
    }
    
    return 0;
}
