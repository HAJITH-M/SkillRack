#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int L1, L2;
    std::cin >> L1 >> L2;

    std::vector<int> array1(L1);
    std::vector<int> array2(L2);

    for(int i = 0; i < L1; ++i) {
        std::cin >> array1[i];
    }

    for(int i = 0; i < L2; ++i) {
        std::cin >> array2[i];
    }

    std::unordered_set<int> set1(array1.begin(), array1.end());
    std::unordered_set<int> set2(array2.begin(), array2.end());

    int distinctCount = 0;

    // Count elements in set1 but not in set2
    for(const int& elem : set1) {
        if(set2.find(elem) == set2.end()) {
            ++distinctCount;
        }
    }

    // Count elements in set2 but not in set1
    for(const int& elem : set2) {
        if(set1.find(elem) == set1.end()) {
            ++distinctCount;
        }
    }

    std::cout << distinctCount << std::endl;

    return 0;
}
