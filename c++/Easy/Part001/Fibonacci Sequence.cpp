#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 3 || n > 50) {
        return 1;
    }

    long long a = 0, b = 1;
    cout << a << " ";

    if (n > 1) {
        cout << b << " ";
    }

    for (int i = 3; i <= n; i++) {
        long long next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    return 0;
}
