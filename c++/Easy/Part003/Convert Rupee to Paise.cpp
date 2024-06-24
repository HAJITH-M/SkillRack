#include <iostream>
#include <cmath> // for round

int main() {
    double rupees;
    std::cin >> rupees;
    
    // Convert rupees to paise and round the result to the nearest integer
    int paise = static_cast<int>(std::round(rupees * 100));
    
    // Output the paise value
    std::cout << paise << std::endl;
    
    return 0;
}
