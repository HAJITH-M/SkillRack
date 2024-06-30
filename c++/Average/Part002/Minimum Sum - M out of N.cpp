#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> numbers(N);
    for(int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }

    // Sort the numbers in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Sum the first M numbers to get the minimum sum
    int minSum = 0;
    for(int i = 0; i < M; ++i) {
        minSum += numbers[i];
    }

    std::cout << minSum << std::endl;

    return 0;
}
