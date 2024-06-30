#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Reading coordinates of the first point
    double x1, y1;
    cin >> x1 >> y1;

    // Reading coordinates of the second point
    double x2, y2;
    cin >> x2 >> y2;

    // Calculating the distance between the points
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Printing the distance rounded to 2 decimal places
    cout << fixed << setprecision(2) << distance << endl;

    return 0;
}
