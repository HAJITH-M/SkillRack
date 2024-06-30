#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, max, min, count = 1;
    cin >> a >> b >> c;

    max = std::max(a, b);
    min = std::min(a, b);

    if (c > max || c < min) {
        cout << "-1" << endl;
        return 0;
    }

    if (c <= max && c >= min) {
        if (c == max || c == min) {
            cout << count << endl;
            return 0;
        } else {
            do {
                max -= min;
                if (max == c) {
                    cout << ++count << endl;
                    return 0;
                } else {
                    count += 2;
                }
            } while (max > min);
            cout << "-1" << endl;
            return 0;
        }
    }

    return 0;
}
