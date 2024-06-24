#include <iostream>
#include <iomanip> // for std::setprecision
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int firstInningsTotal = 0, secondInningsTotal = 0;
    
    for (int i = 0; i < N; ++i) {
        int firstInnings, secondInnings;
        cin >> firstInnings >> secondInnings;
        
        firstInningsTotal += firstInnings;
        secondInningsTotal += secondInnings;
    }
    
    double firstInningsAverage = static_cast<double>(firstInningsTotal) / N;
    double secondInningsAverage = static_cast<double>(secondInningsTotal) / N;
    
    cout << fixed << setprecision(2);
    cout << firstInningsAverage << endl;
    cout << secondInningsAverage << endl;
    
    return 0;
}
