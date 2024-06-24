#include <iostream>
#include <vector>
#include <algorithm>

// Function to find all factors of a number
std::vector<int> findFactors(int num) {
    std::vector<int> factors;
    for (int i = 2; i <= num; ++i) { // Start from 2 to exclude 1
        if (num % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

// Function to check if a number is a common factor of all numbers in the list
bool isCommonFactor(const std::vector<int>& nums, int factor) {
    for (int num : nums) {
        if (num % factor != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> nums[i];
    }
    
    // Find the smallest number in the list
    int smallest = *std::min_element(nums.begin(), nums.end());
    
    // Find all factors of the smallest number
    std::vector<int> factors = findFactors(smallest);
    
    // Count how many of these factors are common to all numbers in the list
    int commonFactorCount = 0;
    for (int factor : factors) {
        if (isCommonFactor(nums, factor)) {
            ++commonFactorCount;
        }
    }
    
    // Print the count of common factors excluding 1
    std::cout << commonFactorCount << std::endl;
    
    return 0;
}
