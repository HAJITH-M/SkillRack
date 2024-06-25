#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Read the amounts spent
    double amountAlen, amountTim;
    cin >> amountAlen >> amountTim;

    // Read the widths of the courts
    double widthAlen, widthTim;
    cin >> widthAlen >> widthTim;

    // Calculate the areas of the courts
    double areaAlen = amountAlen / 5.0;
    double areaTim = amountTim / 5.0;

    // Calculate the lengths of the courts
    double lengthAlen = areaAlen / widthAlen;
    double lengthTim = areaTim / widthTim;

    // Calculate the difference in lengths
    double lengthDifference = abs(lengthTim - lengthAlen);

    // Print the result rounded to two decimal points
    cout << fixed << setprecision(2) << lengthDifference << endl;

    return 0;
}
