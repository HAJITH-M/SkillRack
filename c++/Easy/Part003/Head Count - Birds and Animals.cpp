#include <iostream>

int main() {
    int H, L;
    std::cin >> H >> L;
    
    // Calculate the number of birds and animals
    int B = (4 * H - L) / 2;
    int A = H - B;
    
    // Print the result
    std::cout << B << " " << A << std::endl;
    
    return 0;
}
