#include <iostream>
using namespace std;

int main() {
    // Read the size of the matrix
    int N;
    cin >> N;
    
    // Initialize the matrix and read its elements
    int matrix[20][20]; // maximum size based on constraints
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    // Calculate the sum of the corner elements
    int sumOfCorners = matrix[0][0] + matrix[0][N-1] + matrix[N-1][0] + matrix[N-1][N-1];
    
    // Output the result
    cout << sumOfCorners << endl;
    
    return 0;
}
